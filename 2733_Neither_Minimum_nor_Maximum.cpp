class Solution {
public:
    int findNonMinOrMax(vector<int>& nums) {
        int num1 = -1;
        int num2 = -1;
        int num3 = -1;
        for(size_t i = 0; i < nums.size(); i++)
        {
            if(num1 == -1) num1 = nums[i];
            else if(num2 == -1 && num1 != nums[i]) num2 = nums[i];
            else if(num1 != nums[i] && num2 != nums[i])
            {
                if(num1 > num2)
                {
                    if(num1 > nums[i]) return max(num2,nums[i]);
                    else return num1;
                }
                else
                {
                    if(nums[i] > num1) return min(num2,nums[i]);
                    else return num1;
                }
            }
        }
        return num3;
    }
};
