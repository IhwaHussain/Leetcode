class Solution {
public:
    bool judgeCircle(string moves) {
        int l_count = 0;
        int r_count = 0;
        int u_count = 0;
        int d_count = 0;
        for(size_t i = 0; i<moves.length();i++)
        {
            switch(moves[i])
            {
                case 'L':
                    l_count++;
                    break;
                case 'R':
                    r_count++;
                    break;
                case 'U':
                    u_count++;
                    break;
                case 'D':
                    d_count++;
                    break;
            }
        }
        return (l_count == r_count) && (u_count == d_count);
    }
};
