class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) 
    {
        int sum=0;
        vector<int>v;
        for(auto p:accounts)
        {
            sum=0;
            for(auto m:p)
            {
                sum+=m;   
            }
            v.push_back(sum);
        }
    return *max_element(v.begin(),v.end());
    }
};