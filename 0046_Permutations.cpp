class Solution {
public:
    vector<vector<int>> permute(vector<int>& nums) 
    {
        vector<vector<int>> result;
        vector<int> row(nums);
        vector<vector<int>> rows;
        if(nums.size()==1)
        {
            result.push_back(row);
        }
        else
        {
            for(size_t i = 0; i< nums.size(); i++)
            {
                row.erase(row.begin()+i); //remove num from nums
                rows = permute(row); //get permute of other nums
                for(size_t j = 0; j < rows.size(); j++) 
                {
                    rows[j].push_back(nums[i]);//add num at end
                    result.push_back(rows[j]);//add new permutation to result
                }
                row = nums; //reset row
            }
        }
        return result;
    }
};