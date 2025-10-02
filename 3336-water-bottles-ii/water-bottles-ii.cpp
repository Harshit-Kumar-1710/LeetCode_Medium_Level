class Solution {
public:
    int maxBottlesDrunk(int numBottles, int numExchange) 
    {
        int EmptyBottles=0,FullBottles=numBottles;
        int sum=0;
        sum+=FullBottles;
        EmptyBottles=numBottles;
        FullBottles=0;
        while(FullBottles!=0 || EmptyBottles>=numExchange)
        {
            FullBottles++;
            EmptyBottles=EmptyBottles-numExchange;
            numExchange++;
            if(EmptyBottles<numExchange)
            {
                EmptyBottles+=FullBottles;
                sum+=FullBottles;
                FullBottles=0;
            }
        }
    return sum;
    }
};