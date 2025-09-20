class Solution {
public:
    bool wordPattern(string pattern, string s) 
    {
        int n=pattern.size();
        int m=s.size();
        int i=0,j=0;
        unordered_map<char,string>M;
        set<char>s1;
        set<string>s2;
        while(i<n)
        {
            string str;
            while(j<m && s[j]!=' ')
            {
                str+=s[j];
                j++;
            }
            if(j!=m)
            {
                j++;
            }
            if(M.find(pattern[i])!=M.end())
            {
                if(M[pattern[i]]!=str)
                {
                    return false;
                }
            }
            else
            {
                if(s1.find(pattern[i])==s1.end())
                {
                    if(s2.find(str)!=s2.end())
                    {
                        return false;
                    }
                }
                M[pattern[i]]=str;
            }
            s1.insert(pattern[i]);
            s2.insert(str);
            i++;
        if(i!=n && j==m)
        {
            return false;
        }
        }
        if(i==n && j!=m)
        {
            return false;
        }
    return true;
    }
};