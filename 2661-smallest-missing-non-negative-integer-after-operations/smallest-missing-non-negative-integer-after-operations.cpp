class Solution {
public:
    int findSmallestInteger(vector<int>& nums, int value) 
    {
        int n=nums.size();
        map<int,int>M;
        for(int i=0;i<n;i++)
        {
            if(nums[i]<0)
            {
                nums[i]=(((nums[i]%value)+value)%value);
            }
            else
            {
                nums[i]=nums[i]%value;
            }
        }
        for(auto i:nums)
        {
            M[i]++;
        }
        int MEX=0;
        while(M[(MEX%value)]>0)
        {
            M[MEX%value]--;
            MEX++;
        }
    return MEX;
    }
};