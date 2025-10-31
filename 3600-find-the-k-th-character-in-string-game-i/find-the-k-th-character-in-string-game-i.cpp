class Solution {
public:
    char Func(int k)
    {
        if(k==1) return 'a';
        long long len=1;
        while(len*2<k) len*=2;
        char ch=Func(k-len);
        return (ch=='z')?'a':ch+1;
    }
    char kthCharacter(int k) 
    {
        return Func(k);
        
    }
};