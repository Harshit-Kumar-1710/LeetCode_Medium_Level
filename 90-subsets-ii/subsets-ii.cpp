class Solution {
public:
    vector<vector<int>>Vvi;
    void Func(int i,int n,vector<int>&nums,vector<int>&Vec)
    {
        if(i==n)
        {
            Vvi.push_back(Vec);
            return;
        }
        //Take nums[i]
        Vec.push_back(nums[i]);
        Func(i+1,n,nums,Vec);
        //Not Take nums[i]
        Vec.pop_back();
        Func(i+1,n,nums,Vec);
        return;
    } 
    vector<vector<int>> subsetsWithDup(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        vector<int>Vec;
        set<vector<int>>s;
        Func(0,n,nums,Vec);
        vector<vector<int>>TwoVector;
        for(auto val:Vvi)
        {
            if(s.find(val)==s.end())
            {
                TwoVector.push_back(val);
            }
            s.insert(val);
        }
    return TwoVector;
    }
};