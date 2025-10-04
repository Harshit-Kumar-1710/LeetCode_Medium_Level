class Solution {
public:
    int maxArea(vector<int>& height) 
    {
        int n=height.size();
        int Left=0,Right=n-1;
        int MaxArea=0;
        while(Left<Right)
        {
            int Width=Right-Left;
            int Height=min(height[Left],height[Right]);
            MaxArea=max(MaxArea,Height*Width);
            if(height[Left]<height[Right])
            {
                Left++;
            }
            else
            {
                Right--;
            }
        }
    return MaxArea;
    }
};