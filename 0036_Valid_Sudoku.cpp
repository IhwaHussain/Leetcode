class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        //check rows
        map<char,int> intmap;
        for(size_t i = 0; i< board.size(); i++)
        {
            
            for(size_t j = 0; j< board[i].size(); j++)
            {
                if(board[i][j] != '.' && intmap.count(board[i][j])) return false;
                else intmap[board[i][j]] = 1;
            }
            intmap.clear();
        }
        //check columns
        for(size_t j = 0; j <board[0].size(); j++)
        {
            for(size_t i = 0; i < board.size(); i++)
            {
                if(board[i][j] != '.' && intmap.count(board[i][j])) return false;
                else intmap[board[i][j]] = 1;
            }
            intmap.clear();
        }
        //check boxes
        for (size_t box_i = 0; box_i<9; box_i += 3)
        {
            for(size_t box_j = 0; box_j<9; box_j += 3)
            {
                for(size_t i = 0; i<3; i++)
                {
                    for(size_t j = 0; j<3; j++)
                    {
                        if(board[box_i+i][box_j+j] != '.' && intmap.count(board[box_i+i][box_j+j])) return false;
                        else intmap[board[box_i+i][box_j+j]] = 1;
                    }
                }
                intmap.clear();
            }
        }
        return true;
    }
};
