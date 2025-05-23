class Solution {
public:
    int maximumProduct(vector<int>& nums) 
    {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int Max1=nums[n-1]*nums[0]*nums[1];
        int Max2=nums[n-1]*nums[n-2]*nums[n-3];
        Max1=max(Max1,Max2);
        return Max1;
    }
};