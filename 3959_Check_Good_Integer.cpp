class Solution {
public:
    bool checkGoodInteger(int n) {
        int sum = 0;
        while(n>0 && sum < 50)
        {
            sum += (n%10)*((n%10)-1);
            n /=10;
        }
        return (sum >= 50);
    }
};