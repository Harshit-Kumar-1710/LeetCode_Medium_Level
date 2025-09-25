class Solution {
public:
    void tolow(string &s)
    {
        for(char &c:s)
        {
            c=tolower(c);
        }
    }
    static bool Comp(pair<int,string>&V1,pair<int,string>&V2)
    {
        if(V1.first!=V2.first) return V1.first>V2.first;
        else return V1.second<V2.second;
    }
    string mostCommonWord(string paragraph, vector<string>& banned) 
    {
        set<string>S;
        int n=banned.size();
        for(string s:banned)
        {
            S.insert(s);
        }
        int m=paragraph.size();
        map<string,int>M;
        vector<pair<int,string>>Vec;
        for(int i=0;i<m;i++)
        {
            string str;
            while(i<m && ((paragraph[i]>='A' && paragraph[i]<='Z') || (paragraph[i]>='a' && paragraph[i]<='z')))
            {
                str+=paragraph[i];
                i++;
            }
            if(!str.empty())
            {
                tolow(str);
                if(S.find(str)==S.end())
                {
                    M[str]++;
                }
            }
        }
        for(auto p:M)
        {
            Vec.push_back({p.second,p.first});
        }
        sort(Vec.begin(),Vec.end(),Comp);
        return Vec[0].second;      
    }
};