class Solution
{
public:
    int addDigits(int num)
    {
        while (num / 10 != 0)
        {
            int tmp = num;
            int emA = 0;
            while (tmp != 0)
            {
                emA += tmp % 10;
                tmp /= 10;
            }
            num = emA;
        }
        return num;
    }
};