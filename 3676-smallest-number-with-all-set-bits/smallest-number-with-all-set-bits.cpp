class Solution {
public:
    int smallestNumber(int n) 
    {
        int num=n,c=0;
        while(num!=0)
        {
            c++;
            num=num/2;
        }
        return pow(2,c)-1;
    }
};