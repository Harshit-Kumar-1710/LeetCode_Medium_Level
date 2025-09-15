class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) 
    {
        int n=text.size();
        int i=0;
        unordered_set<char>s;
        for(auto &c:brokenLetters)
        {
            s.insert(c);
        }
        int count=0;
        for(int i=0;i<n;i++)
        {
            while(i<n && text[i]!=' ')
            {
                if(s.find(text[i])!=s.end())
                {
                    break;
                }
                else
                {
                    i++;
                }
            }
            if(i==n || text[i]==' ')
            {
                count++;
            }
            else
            {
                while(i<n && text[i]!=' ')
                {
                    i++;
                }
            }
        }
    return count;  
    }
};