class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int m)
    {
        if(m > nums.size()) return -1;
        int currSum = 0;
        for(size_t i = 0; i<m; i++)
        {
            currSum += nums[i];
        }
        int bestSum = currSum;
        for(size_t i = m; i<nums.size(); i++)
        {
            currSum -= nums[i-m];
            currSum += nums[i];
            if(currSum > 0 && (bestSum <= 0 || currSum < bestSum)) bestSum = currSum;
            if(bestSum == 1) return 1;
        }
        if(bestSum <= 0) return -1;
        else return bestSum;
    }
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int bestSum = minimumSumSubarray(nums,l);
        int tempSum = 0;
        for(size_t i = l+1; i <=r; i++)
        {
            if(bestSum == 1) return 1;
            tempSum = minimumSumSubarray(nums,i);
            if(tempSum > 0 && (bestSum <=0 || tempSum < bestSum)) bestSum = tempSum;
        }
        return bestSum;
    }
};
