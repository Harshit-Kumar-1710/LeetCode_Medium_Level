class Solution {
public:
    double Func(double x,int n)
    {
        if(n==0) return 1;
        double half=Func(x,n/2);
        double res=half*half;
        if(n%2!=0) res=res*x;
        return res;
    }
    double myPow(double x, int n) 
    {
        double q=Func(x,n);
        if(n<0) return (double)(1/q);
        return q;
    }
};