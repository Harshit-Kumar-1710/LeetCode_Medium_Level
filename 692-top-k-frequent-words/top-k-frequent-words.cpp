class Solution {
public:
    static bool comp(pair<int,string>&p1,pair<int,string>&p2)
    {
        if(p1.first!=p2.first)
        {
            return p1.first>p2.first;
        }
        else
        {
            return p1.second<p2.second;
        }
    }
    vector<string> topKFrequent(vector<string>& words, int k) 
    {
        int n=words.size();
        map<string,int>M;
        vector<string>Vec1;
        for(int i=0;i<n;i++)
        {
            M[words[i]]++;
        }
        vector<pair<int,string>>Vec;
        for(auto p:M)
        {
            Vec.push_back({p.second,p.first});
        }
        sort(Vec.begin(),Vec.end(),comp);
        for(int i=0;i<k;i++)
        {
            Vec1.push_back(Vec[i].second);
        }
        return Vec1;      
    }
};