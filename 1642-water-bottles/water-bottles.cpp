class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) 
    {
        int num=numBottles,sum=0,rem=0;
        sum+=num;
        while(num>=numExchange)
        {
            rem=num%numExchange;
            num=num/numExchange;
            sum+=num;
            num+=rem;
        }
    return sum;
    }
};