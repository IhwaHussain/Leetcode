class Solution {
public:
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
       vector<int> newcandidates; //arg to pass to recursive function
       int newtarget =0; //arg to pass to recursive function
       vector<vector<int>> combinations; //result
       for(size_t i = 0; i< candidates.size(); i++)
       {
            if(candidates[i] > target) continue; //candidates large then target are excluded
            else if(candidates[i] == target) //candidate equal to target is added and discarded from candidates
            {
            vector<int> newCombo;
            newCombo.push_back(candidates[i]);
            combinations.push_back(newCombo);
            }
            else //candidate less than taregt is considered for recursive candidates
            {
                newtarget = max(newtarget, candidates[i]); //make new target equal to largest germane candidate
                newcandidates.push_back(candidates[i]);
            }
       }
        if(newcandidates.size()==0) return combinations;
        else
        {
            vector<vector<int>> newcombinations = combinationSum(newcandidates,target-newtarget);
            for(size_t i = 0; i < newcombinations.size(); i++)
            {
                newcombinations[i].push_back(newtarget);
                combinations.push_back(newcombinations[i]);
            }
            erase(newcandidates,newtarget);
            vector<vector<int>> newcombinations2 = combinationSum(newcandidates,target);
            for(size_t i =0; i < newcombinations2.size(); i++)
            {
                combinations.push_back(newcombinations2[i]);
            }

        }
        return combinations; 
    }
};
