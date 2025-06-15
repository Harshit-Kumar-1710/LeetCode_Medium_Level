class Solution {
public:
    string frequencySort(string s) 
    {
        int n=s.size();
        vector<int>p;
        map<char,int>m;
        for(int i=0;i<n;i++)
        {
            if(m.find(s[i])==m.end())
            {
                m[s[i]]=1;
            }
            else
            {
                m[s[i]]+=1;
            }
        }
        for(auto it:m)
        {
            p.push_back(it.second);
        }
        sort(p.begin(),p.end(),greater<int>());
        int m1=p.size(),j=0;
        set<char>Check;
        for(int i=0;i<m1;i++)
        {
            char c1;
            for(auto it:m)
            {
                if(it.second==p[i] && Check.find(it.first)==Check.end())
                {
                    Check.insert(it.first);
                    c1=it.first;
                    break;   
                }
            }
            if(p[i]>1)
            {
                int c=p[i];
                while(c>0)
                {
                    s[j]=c1;
                    j++;
                    c--;
                }
            }
            else
            {
                s[j]=c1;
                j++;
            }
        }
    return s;
    }
};