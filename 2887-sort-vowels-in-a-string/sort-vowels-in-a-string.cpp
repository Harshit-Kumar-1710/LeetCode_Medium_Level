class Solution {
public:
    string sortVowels(string s) 
    {
        int n=s.size();
        vector<char>Vec;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='i' ||s[i]=='I' || s[i]=='E' || s[i]=='e' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
            {
                Vec.push_back(s[i]);
            }
        }
    sort(Vec.begin(),Vec.end());
        int j=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='a' || s[i]=='A' || s[i]=='i' ||s[i]=='I' || s[i]=='E' || s[i]=='e' || s[i]=='O' || s[i]=='o' || s[i]=='U' || s[i]=='u')
            {
                s[i]=Vec[j];
                j++;
            }
        }
    return s;
    }
};