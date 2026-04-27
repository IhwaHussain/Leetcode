class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int currSeq = 1;
        int longSeq = 1;
        for(size_t i = 1; i< nums.size(); i++)
        {
            if(nums[i] > nums[i-1]) currSeq++;
            else
            {
                longSeq = max(longSeq,currSeq);
                currSeq = 1;
            }
        }
        return max(longSeq,currSeq);
    }
};
