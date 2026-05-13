class Solution {
public:
    bool winnerOfGame(string colors) {
        colors += 'C'; 
        int aMoves = 0;
        int bMoves = 0;
        char currColor = colors[0];
        int currSeq = 1;
        for(size_t i = 1; i<colors.length(); i++)
        {
            if(colors[i] != currColor)
            {
                if(currSeq > 2)
                {
                    if(currColor == 'A') aMoves += currSeq-2;
                    else if(currColor == 'B') bMoves += currSeq-2;
                }
                currSeq = 1;
                currColor = colors[i];
            }
            else currSeq++;
        }
        return aMoves > bMoves;
    }
};
