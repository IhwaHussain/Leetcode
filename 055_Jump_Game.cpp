class Solution {
public:
    bool canJump(vector<int>& nums) {
        int count =0;
        for(int i=0; i<nums.size(); i++)
        {
            if(count<i) return false;
            if(count>nums.size()-1) return true;
            count=max(count,nums[i]+i);
        }
        return true;
    }
};
