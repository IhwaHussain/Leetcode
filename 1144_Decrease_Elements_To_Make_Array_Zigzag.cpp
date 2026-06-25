class Solution {
public:
    int movesToMakeZigzag(vector<int>& nums) {
        if(nums.size()<2) return 0;
        int countBigEven = 0;
        int countBigOdd  = 0;
        if(nums[0] >= nums[1]) countBigOdd += (nums[0]-nums[1])+1;
        for(size_t i = 1; i<nums.size()-1; i++)
        {
            if(nums[i]>= min(nums[i-1],nums[i+1]))
            {
                if(i%2==0)countBigOdd += nums[i]-min(nums[i-1],nums[i+1])+1;
                else countBigEven += nums[i]-min(nums[i-1],nums[i+1])+1;
            }
        }
        if(nums[nums.size()-1] >= nums[nums.size()-2])
        {
            if(nums.size()%2==0) countBigEven += nums[nums.size()-1]-nums[nums.size()-2]+1;
            else countBigOdd += nums[nums.size()-1]-nums[nums.size()-2]+1;
        }
        return min(countBigOdd,countBigEven);
    }
};