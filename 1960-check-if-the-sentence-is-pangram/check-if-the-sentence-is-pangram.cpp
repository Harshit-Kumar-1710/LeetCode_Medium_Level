class Solution {
public:
    bool checkIfPangram(string sentence) 
    {
        int n=sentence.size();
        vector<int>Vec(26,0);
        for(int i=0;i<n;i++)
        {
            Vec[sentence[i]-'a']++;
        }
        for(int i=0;i<(int)Vec.size();i++)
        {
            if(Vec[i]==0)
            {
                return false;
            }
        }
    return true;
    }
};