class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int result = nums[0] + nums[nums.size()-1];
        int i = 0;
        int j = nums.size()-1;
        while(i<j)
        {
            if(nums[i]+nums[j] > result) result = nums[i]+nums[j];
            i++;
            j--;
        }
        return result;
    }
};