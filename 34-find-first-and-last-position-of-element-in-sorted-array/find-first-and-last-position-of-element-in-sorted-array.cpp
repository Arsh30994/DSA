class Solution {
public:
    int findBound(vector<int>& nums, int target, bool findFirst) {
        int low = 0, high = nums.size() - 1;
        int result = -1;

        while (low <= high) {
            int mid = low + (high - low) / 2;
            if (nums[mid] == target) {
                result = mid;
                if (findFirst) high = mid - 1;
                else low = mid + 1;
            }
            else if (nums[mid] < target) low = mid + 1;
            else high = mid - 1;
        }
        return result;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = findBound(nums, target, true);
        if (first == -1) return {-1, -1};
        int last = findBound(nums, target, false);
        return {first, last};
    }
};