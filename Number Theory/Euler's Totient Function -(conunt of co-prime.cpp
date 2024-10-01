#include<bits/stdc++.h>
using namespace std;
///        Euler's Totient Function      /////
/*        n=10
          find out between 1 to n(10) number of pair when pair of GCD is 1 or number of co-prime.
          gcd(1,10)=1
          gcd(3,10)=1   this process is brute-force so complexity is high.
          gcd(7,10)=1
          gcd(9,10)=1
          number of co-prime =4
    //better way
    if n=60 prime factor=2^2*3^1*5^1
        pie(n)=n*((p1-1)/p1)*((p2-1)/p2)......((pk-1)/pk)  (Formula)
        pie(60)=60*((2-1)/2)*((3-1)/3)*((5-1)/5)
        pie(60)=16 (ans)
        */
void pie(int n)
{
    int res=n;
    for(int i=2; i*i<=n; i++){
        if(n%i==0){
            while(n%i==0)n/=i;
        res*=(i-1);
        res/=i;
        }
    }
    if(n>1){
        res*=n-1;
        res/=n;
    }
    cout<<res<<endl;
}
///                 using seive             ///
int phi[M];
ull presum[M+2];
void seive()
{
    for(int i=2; i<=M; i++)
        phi[i]=i;
    for(int i=2; i<=M; i++){
        if(phi[i]==i)
            for(int j=i; j<=M; j+=i)
                phi[j]-=phi[j]/i;
    }
}
int main()
{
    int n;cin>>n;
    pie(n);
    return 0;
}
