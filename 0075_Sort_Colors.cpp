class Solution {
public:
    void sortColors(vector<int>& nums) {
        size_t afterLastRed = 0;
        size_t beforeFirstBlue = nums.size()-1;
        for(size_t i = 0; i< nums.size(); i++)
        {
            switch(nums[i])
            {
                case 0:
                    if(i > afterLastRed)
                    {
                        nums[i] = nums[afterLastRed];
                        nums[afterLastRed] = 0;
                        i--;
                    }
                    afterLastRed++;
                    break;
                case 1:
                    break;
                case 2:
                    if(i < beforeFirstBlue)
                    {
                        nums[i] = nums[beforeFirstBlue];
                        nums[beforeFirstBlue] = 2;
                        i--;
                        beforeFirstBlue--;
                    }
                    else if(i == beforeFirstBlue) return;
                    break;
            }
        }
    }
};
