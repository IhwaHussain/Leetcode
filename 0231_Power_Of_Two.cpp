class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==2 || n == 1) return true;
        else if(n % 2 == 1 || n < 1) return false;
        else return isPowerOfTwo(n/2);
    }
};
