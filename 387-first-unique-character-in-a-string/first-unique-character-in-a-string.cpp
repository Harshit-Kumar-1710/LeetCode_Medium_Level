class Solution {
public:
    int firstUniqChar(string s) 
    {
       unordered_map<char,int>m;
       for(char c:s)
       {
            if(m.find(c)==m.end())
            {
                m[c]=1;
            }
            else
            {
                m[c]+=1;
            }
       }
       for(int i=0;i<s.size();i++)
       {
            if(m[s[i]]==1)
            {
                return i;
            }
       }
    return -1;
    }
};