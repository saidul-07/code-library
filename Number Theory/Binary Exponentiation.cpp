#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define precision(n) fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;
#define pb    push_back
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lli long long int
#define ulli unsigned long long int
#define fo(x,n) for(int i=x; i<n; i++)
using namespace std;
/* Binary_exponentiation   O(logn)
        N=2^10   =2*2*2*2*2*2*2*2*2*2
         =2^1000 how solve this problem?

         =2^9=512
         res    base     power
          1       2        9   first off all check power if power even or odd
          2       2        8   while until power not equal to 0
          2       4        4    if power odd(9) res*=base power-=1;
          2       16       2    else base*=base powe/=2
          2       256      1
          512     256      1
          res=512;
          // calculate power reduce time complexity */
void Binary_exponentiation(int base,int p)
{
    int res=1;
    while(p!=0){
        if(p%2!=0) res*=base,p--;
        else base*=base,p/=2;
    }cout<<res<<endl;
}
int main(){
        fast();
        int t;cin>>t;
        while(t--){
        int base,power;cin>>base>>power;
        Binary_exponentiation(base,power);
        }
    return 0;
}
