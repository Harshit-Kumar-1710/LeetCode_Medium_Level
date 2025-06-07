class Solution {
public:
    bool checkIfExist(vector<int>& arr) 
    {
        sort(arr.begin(),arr.end());
        int n=arr.size();
        for(int i=0;i<n;i++)
        {
            int Target=2*arr[i];
            int low=0,high=n-1;
            while(low<=high)
            {
                int mid=(low+high)/2;
                if(mid==i)
                {
                    if(Target>arr[mid])
                    {
                        low=mid+1;
                    }
                    else
                    {
                        high=mid-1;
                    }
                }
                else if(arr[mid]==Target)
                {
                    return true;
                }
                else if(arr[mid]<Target)
                {
                    low=mid+1;
                }
                else
                {
                    high=mid-1;
                }
            }
        }
    return false;   
    }
};