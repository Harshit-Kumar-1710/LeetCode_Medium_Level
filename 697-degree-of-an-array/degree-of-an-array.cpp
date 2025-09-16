class Solution {
public:
    static bool comp(pair<int,int>&p1,pair<int,int>&p2)
    {
        if(p1.first!=p2.first) return p1.first>p2.first;
        else return p1.second<p2.second;
    }
    int findShortestSubArray(vector<int>& nums) 
    {
        int n=nums.size();
        unordered_map<int,int>M;
        for(int i=0;i<n;i++)
        {
            M[nums[i]]++;
        }
        vector<pair<int,int>>Vec;
        for(auto p:M)
        {
            Vec.push_back({p.second,p.first});
        }
        sort(Vec.begin(),Vec.end(),comp);
        int Maximum=Vec[0].first;
        unordered_map<int,vector<int>>M1;
        for(int i=0;i<n;i++)
        {
            M1[nums[i]].push_back(i);
        }
        int pos1=-1,pos2=-1,MinLength=INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(M[nums[i]]==Maximum)
            {
                pos1=M1[nums[i]][0];
                pos2=M1[nums[i]].back();
                MinLength=min(MinLength,pos2-pos1+1);
            }
        }
    return MinLength;
    }
};