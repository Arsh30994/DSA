class Solution {
public:
    void sortColors(vector<int>& nums) {
        int count0 = 0, count1 = 0, count2 = 0;
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            if (nums[i] == 0) {
                count0++;
            }
            else if (nums[i] == 1) {
                count1++;
            }
            else {
                count2++;
            }
        }
        int index = 0;
        while (count0--) {
            nums[index++] = 0;
        }
        while (count1--) {
            nums[index++] = 1;
        }
        while (count2--) {
            nums[index++] = 2;
        }
    }
};