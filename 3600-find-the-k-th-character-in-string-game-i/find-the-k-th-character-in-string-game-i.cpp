class Solution {
public:
    char kthCharacter(int k) 
    {
        string word="a";
        char ch;
        while(word.size()<k)
        {
            string word1;
            for(auto c:word)
            {
                char ch=c+1;
                word1+=ch;
            }
            word.append(word1);
        }
        for(int i=0;i<k;i++)
        {
            ch=word[i];
        }
    return ch;        
    }
};