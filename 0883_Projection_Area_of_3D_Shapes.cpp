class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int xy = 0;
        int xz = 0;
        int yz = 0;
        int xz_max=0;
        vector<int> yz_maxes(grid[0].size(),0);
        for(size_t i = 0; i<grid.size();i++)
        {
            for(size_t j = 0; j<grid[i].size(); j++)
            {
                if(grid[i][j] != 0) 
                {
                    xy++;
                    xz_max = max(xz_max,grid[i][j]);
                    yz_maxes[j] = max(yz_maxes[j], grid[i][j]);
                }
            }
            xz += xz_max;
            xz_max =0;
        }
        for(size_t k = 0; k<yz_maxes.size(); k++)
        {
            yz += yz_maxes[k];
        }
        return xy + xz + yz;
    }
};