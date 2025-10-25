class Solution {
public:
    const long long MOD =1e9+7;
    long long FastPower(int base,long long Exponent)
    {
        if(Exponent==0) return 1;
        long long Half=FastPower(base,Exponent/2);
        long long res=(Half*Half)%MOD;
        if(Exponent%2!=0) res=(res*base)%MOD;
        return res;
    }
    int countGoodNumbers(long long n) 
    {
        long long EvenPositions=(n+1)/2;
        long long OddPositions=n/2;
        long long part1=FastPower(5,EvenPositions);
        long long part2=FastPower(4,OddPositions);
        return (part1*part2)%MOD;
    }
};