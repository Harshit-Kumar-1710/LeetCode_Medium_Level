class Solution {
public:
    vector<int>Vec;
    int Func(int n)
    {
        if(n<=2)
        return n;
        int a,b;
        if(Vec[n-1]!=-1) a=Vec[n-1];
        else a=Func(n-1);
        if(Vec[n-2]!=-1)
            b=Vec[n-2];
        else b=Func(n-2);
        Vec[n]=a+b;
        return Vec[n];
    }
    int climbStairs(int n) 
    {
        Vec.resize(n+1,-1);
        return Func(n);
        
    }
};