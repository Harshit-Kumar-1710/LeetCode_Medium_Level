class Solution {
public:
    set<vector<int>>S;
    void Func(int i,int n,vector<int>&nums,vector<int>&Vec)
    {
        if(i==n)
        {
            S.insert(Vec);
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
        vector<vector<int>>Ans;
        Func(0,n,nums,Vec);
        for(auto i:S)
        {
            Ans.push_back(i);            
        }
    return Ans;
    }
};