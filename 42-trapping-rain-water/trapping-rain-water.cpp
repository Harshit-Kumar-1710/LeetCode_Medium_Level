class Solution {
public:
    int trap(vector<int>& height) 
    {
        int n=height.size();
        vector<int>LeftMaxHeight(n);
        vector<int>RightMaxHeight(n);
        int LMaxHeight=0,RMaxHeight=0;
        for(int i=0;i<n;i++)
        {
            LeftMaxHeight[i]=LMaxHeight;
            LMaxHeight=max(height[i],LMaxHeight);
        }
        for(int i=n-1;i>=0;i--)
        {
            RightMaxHeight[i]=RMaxHeight;
            RMaxHeight=max(height[i],RMaxHeight);
        }
        int sum=0;
        for(int i=0;i<n;i++)
        {
            int h1=min(LeftMaxHeight[i],RightMaxHeight[i])-height[i];
            if(h1<0)
            {
                continue;
            }
            sum+=h1;
        }
    return sum;
    }
};