class Solution
{
public:
    int subtractProductAndSum(int n)
    {
        int p = 0, t = 1;
        while (n > 0)
        {
            int digit = n % 10;
            n /= 10;
            p += digit;
            t *= digit;
        }
        return t - p;
    }
};