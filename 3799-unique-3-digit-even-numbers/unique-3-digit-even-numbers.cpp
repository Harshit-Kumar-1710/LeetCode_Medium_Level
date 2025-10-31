class Solution {
public:
    int totalNumbers(vector<int>& digits) 
    {
        int n=digits.size(),c=0;
        vector<int>Vec(10);
        for(auto val:digits)
        {
            Vec[val]++;
        }
        for(int i=1;i<=9;i++)
        {
            if(Vec[i]==0) continue;
            Vec[i]--;
            for(int j=0;j<=9;j++)
            {
                if(Vec[j]==0) continue;
                Vec[j]--;
                for(int k=0;k<=8;k+=2)
                {
                    if(Vec[k]==0) continue;
                    Vec[k]--;
                    c++;
                    Vec[k]++;
                }
            Vec[j]++;
            }
        Vec[i]++;
        }
    return c;
    }
};