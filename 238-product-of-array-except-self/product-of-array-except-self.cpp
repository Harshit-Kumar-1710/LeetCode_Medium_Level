class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) 
    {
        int n=nums.size();
        vector<int>LeftProduct(n,0);
        vector<int>RightProduct(n,0);
        vector<int>Ans(n,0);
        int Product=1;
        for(int i=0;i<n;i++)
        {
            Product*=nums[i];
            LeftProduct[i]=Product;
        }
        Product=1;
        for(int i=n-1;i>=0;i--)
        {
            Product*=nums[i];
            RightProduct[i]=Product;
        }
        for(int i=0;i<n;i++)
        {
            if(i!=0 && i!=n-1)
            {
                Ans[i]=LeftProduct[i-1]*RightProduct[i+1];
            }
            else
            {
                if(i==0)
                {
                    Ans[i]=RightProduct[i+1];
                }
                else
                {
                    Ans[i]=LeftProduct[i-1];
                }
            }
        }
    return Ans;
    }
};