class Solution {
public:
    string baseNeg2(int n) {
        if(n == 0) return "0";
        if(n == 1) return "1";
        char d2 = '1';
        if(n%2==0) d2 = '0';
        else n -= 1;
        char d1 = '1';
        if(n%4==0) d1 = '0';
        else n += 2;
        if(n == 0) return ""+d1+d2;
        return baseNeg2(n/4) + d1 +d2;
    }
};