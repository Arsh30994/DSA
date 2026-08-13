class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end());
        vector<vector<int>> res;
        for (auto& iv : intervals) {
            if (!res.empty() && iv[0] <= res.back()[1]) {
                res.back()[1] = max(res.back()[1], iv[1]);
            } else {
                res.push_back(iv);
            }
        }
        return res;
    }
};