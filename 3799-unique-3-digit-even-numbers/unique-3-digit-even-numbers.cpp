class Solution {
public:
    int totalNumbers(vector<int>& digits) 
    {
        int n=digits.size();
        set<int>s;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                for(int k=0;k<n;k++)
                {
                    if(i==j || j==k || i==k)
                    {
                        continue;
                    }
                    int Num=digits[i]*100+digits[j]*10+digits[k];
                    if(Num>=100 && Num%2==0)
                    {
                        s.insert(Num);
                    }
                }
            }
        }
    return s.size();
    }
};