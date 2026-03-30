class Solution {
public:
    int getPrimeFactorsSum(int n)
    {
        int primeFactorsSum = 0;
        int factor = 2;
        while(n > 1 && factor<sqrt(n)+1)
        {
            if(n % factor == 0)
            {
                primeFactorsSum += factor;
                n = n/factor;
            }
            else
            {
                factor++;
            }
        }
        if(n!=1) primeFactorsSum += n;
        return primeFactorsSum;
    }

    int smallestValue(int n) {
        int temp = getPrimeFactorsSum(n);
        if(n==temp) return n;
        else return smallestValue(temp);
    }
};
