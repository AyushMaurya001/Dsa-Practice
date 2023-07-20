class Solution{
    public:
    
    long long power(int a,int b)
    {
       
       if (b==0) return 1;
       int mod=1000000000+7;
       long long temp=power(a,b/2)%mod, ans1=(temp*temp)%mod;
       if (b%2==0){
           return ans1;
       }
       long long ans=(ans1*a)%mod;
       return ans;
        
    }

};