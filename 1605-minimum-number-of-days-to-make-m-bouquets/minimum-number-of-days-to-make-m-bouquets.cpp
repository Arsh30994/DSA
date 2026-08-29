class Solution {
public:
    bool possible(vector<int>& arr, long long day, int m, int k) {
        int cnt = 0;
        long long noOfB = 0;
        for (int i = 0; i < (int)arr.size(); i++) {
            if (arr[i] <= day) {
                cnt++;
            } else {
                noOfB += cnt / k;
                cnt = 0;
            }
        }
        noOfB += cnt / k;  
        return noOfB >= m;
    }

    int minDays(vector<int>& bloomDay, int m, int k) {
        long long need = (long long)m * k;
        if (need > (long long)bloomDay.size()) return -1;

        int low  = *min_element(bloomDay.begin(), bloomDay.end());
        int high = *max_element(bloomDay.begin(), bloomDay.end());

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (possible(bloomDay, mid, m, k)) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        return low;
    }
};