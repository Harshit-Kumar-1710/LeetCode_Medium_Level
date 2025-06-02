class Solution {
public:
    int firstUniqChar(string s) 
    {
       int Array[26]={0},n=s.size();
       for(int i=0;i<s.size();i++)
       {
            Array[s[i]-'a']+=1;
       }
       for(int i=0;i<s.size();i++)
       {
            if(Array[s[i]-'a']==1)
            {
                return i;
            }
       }
    return -1;
    }
};