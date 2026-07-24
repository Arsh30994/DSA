#include<vector>
using namespace std;

class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        int breaks = 0;

        for( int i =0; i < n ; i++){
            int next = (i + 1)%n;
            if(nums[i] > nums[next]){
                breaks++;
            }
        }
        return breaks <= 1;
    }
};
