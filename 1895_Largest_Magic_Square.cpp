class Solution {
public:
    bool validMagicSquare(vector<vector><int>>& grid)
    {
        if(grid.size()!=grid[0].size()) return false;
        int sum = 0;
        for(size_t i=0; i < grid[0].size(); i++)
        {
            sum += grid[0][i];
        }
        //check rows
        for(size_t i =1; i <grid.size(); i++)
        {
            int tempsumhor = 0;
            for(size_t j = 0; j < gird[i].size(); j++)
            {
                tempsumhor += grid[i][j];
            }
            if(tempsumhor != sum) return false;
        }
        //check columns
        for(size_t j = 0; j<grid[0].size(); j++)
        {
            int tempsumver = 0;
            for(size_t i = 0; i < grid.size(); i++)
            {
                tempsumver += grid[i][j];
            }
            if(tempsumver != sum) return false;
        }
        //check diagonal
        int tempsumdia = 0;
        int tempsumrevdia = 0;
        for(size_t i = 0; i< grid.size(); i++)
        {
            tempsumdia += grid[i][i];
            tempsumrevdia += grid[i][grid.size()-1-i];
        }
        return sum == tempsumdia && sum == tempsumrevdia;
    }    

    int largestMagicSquare(vector<vector<int>>& grid) {
        size_t m = grid.size(); //rows
        size_t n = grid[0].size(); //columns
        size_t boundary = min(m,n);
        size_t count = 1;
        for(size_t k = 2; k < boundary+1; k++)
        {
            for(size_t i1 = 0;i1 < grid.size()-k+1; i1++)
            {
                for(size_t j1 = 0; j1 < grid.size()-k+1; j1++)
                {
                    vector<vector<int>> grid2;
                    for(size_t i2 = i1; i2<i1+k; i2++)
                    {
                        
                    }
                }
            }
        }
    }
};
