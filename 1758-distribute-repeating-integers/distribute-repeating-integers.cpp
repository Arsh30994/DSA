class Solution {
public:
    bool canDistribute(vector<int>& nums, vector<int>& quantity) {
        unordered_map<int,int> freq;
        for (int x : nums) freq[x]++;
        vector<int> counts;
        for (auto& [k, v] : freq) counts.push_back(v);
        int m = quantity.size();
        int full = (1 << m) - 1;
        vector<int> sumMask(1 << m, 0);
        for (int mask = 1; mask <= full; mask++) {
            int lowBit = mask & (-mask);
            int idx = __builtin_ctz(lowBit);
            sumMask[mask] = sumMask[mask ^ lowBit] + quantity[idx];
        }
        vector<bool> dp(1 << m, false);
        dp[0] = true;
        for (int cnt : counts) {
            if (dp[full]) break;
            for (int mask = full; mask >= 0; mask--) {
                if (!dp[mask]) continue;
                int comp = full ^ mask;
                for (int sub = comp; sub; sub = (sub - 1) & comp) {
                    if (sumMask[sub] <= cnt) {
                        dp[mask | sub] = true;
                    }
                }
            }
        }
        return dp[full];
    }
};