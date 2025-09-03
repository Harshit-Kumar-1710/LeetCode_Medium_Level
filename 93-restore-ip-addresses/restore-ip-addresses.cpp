class Solution {
public:
    bool Check(string &s,int n)
    {
        if (n==1) return true;
        if(s[0]=='0') return false;
        if (n==2) return true;
        if (n>3) return false;
        if(n==3)
        {
            int num=stoi(s);
            if(num>255)
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    return true;
    }
    vector<string> restoreIpAddresses(string s) 
    {
        int n=s.size();
        vector<string>Ans;
        for(int i=1;i<n;i++)
        {
            for(int j=i+1;j<n;j++)
            {
                for(int k=j+1;k<n;k++)
                {
                    string s1=s.substr(0,i);
                    string s2=s.substr(i,j-i);
                    string s3=s.substr(j,k-j);
                    string s4=s.substr(k,n-k);
                    if(Check(s1,s1.size()) && Check(s2,s2.size()) && Check(s3,s3.size()) && Check(s4,s4.size()))
                    {
                        string s5=s1+"."+s2+"."+s3+"."+s4;
                        Ans.push_back(s5);
                    }
                }
            }
        }
    return Ans;
    }
};