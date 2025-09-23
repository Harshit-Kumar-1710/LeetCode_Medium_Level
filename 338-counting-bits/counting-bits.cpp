class Solution {
public:
    vector<int> countBits(int n) 
    {
        vector<int>Vec(n+1);
        for(int i=0;i<=n;i++)
        {
            int Num=i;
            int c=0;
            while(Num!=0)
            {
                if(Num&1==1)
                {
                    c++;
                }
                Num=Num>>1;
            }
            Vec[i]=c;
        }
    return Vec;
    }
};