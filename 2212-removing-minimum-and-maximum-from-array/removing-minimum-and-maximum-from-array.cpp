class Solution {
public:
    int minimumDeletions(vector<int>& nums) 
    {
        int n=nums.size(),maxi=0,mini=0,len1,len2,len3,len4,minimum=nums[0],maximum=nums[0];
        if(n==1)
        {
            return 1;
        }
        for(int i=1;i<n;i++)
        {
            if(nums[i]<minimum)
            {
                minimum=nums[i];
                mini=i;
            }
            if(nums[i]>maximum)
            {
                maximum=nums[i];
                maxi=i;
            }
        }
        len1=max(maxi,mini)+1;
        len2=max(n-maxi,n-mini);
        len3=maxi+1+(n-mini);
        len4=mini+1+(n-maxi);
    return min({len1,len2,len3,len4});
    }
};