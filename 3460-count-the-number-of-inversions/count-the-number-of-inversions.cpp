class Solution {
public:
    int numberOfPermutations(int n, vector<vector<int>>& requirements) {
        const int MOD = 1e9 + 7;
        vector<int> reqAt(n, -1);
        int maxCnt = 0;
        for (auto& r : requirements) {
            reqAt[r[0]] = r[1];
            maxCnt = max(maxCnt, r[1]);
        }
        if (reqAt[0] > 0) return 0;
        vector<long long> dp(maxCnt + 1, 0);
        dp[0] = 1;
        for (int i = 1; i <= n; i++) {
            vector<long long> prefix(maxCnt + 1);
            prefix[0] = dp[0];
            for (int j = 1; j <= maxCnt; j++)
                prefix[j] = (prefix[j - 1] + dp[j]) % MOD;
            vector<long long> newDp(maxCnt + 1, 0);
            for (int j = 0; j <= maxCnt; j++) {
                long long total = prefix[j];
                if (j - i >= 0) total = (total - prefix[j - i] + MOD) % MOD;
                newDp[j] = total;
            }
            dp = newDp;
            int end = i - 1;
            if (reqAt[end] != -1) {
                int c = reqAt[end];
                if (c > maxCnt || dp[c] == 0) return 0;
                vector<long long> locked(maxCnt + 1, 0);
                locked[c] = dp[c];
                dp = locked;
            }
        }
        long long ans = 0;
        for (long long v : dp) ans = (ans + v) % MOD;
        return (int) ans;
    }
};