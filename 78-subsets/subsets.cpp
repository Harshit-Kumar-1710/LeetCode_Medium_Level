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
        Vec.push_back(nums[i]);
        Func(i+1,n,nums,Vec);
        Vec.pop_back();
        Func(i+1,n,nums,Vec);
        return;
    } 
    vector<vector<int>> subsets(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>Vec;
        Func(0,n,nums,Vec);
        return Vvi;      
    }
};