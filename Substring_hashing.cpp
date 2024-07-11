#include<bits/stdc++.h>
using namespace std;
#define      fast()        ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define      ll            long long int
#define      ull           unsigned long long int
#define      mod           1000000007
#define      vi            vector<int>
#define      ivi(v)        for(auto & i:v)cin>>i
#define      outvi(v)      for(auto & i:v)cout<<i<<' '
#define      pb            push_back
#define      fo(x,n)       for(int i=0; i<n; i++)
#define      fo1(x,n)       for(int i=1; i<=n; i++)
#define      endl          '\n'
#define      yes           cout<<"YES"<<endl
#define      no            cout<<"NO"<<endl
#define      precision(n)  fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;
    
    // Lets string str ="abcde" and prime  p=3
        //consider an arr and counting index from 1
        // arr[0]=0;
        // arr[1]=arr(0)*p^0+ a (first char a)
        // arr[2]=a*p^1+b (next char b)
        // arr[3]=a*p^2+b*p^1+c
        // arr[4]=a*p^3+b*p^2+c*p+d
        // arr[5]=a*p^4+b*p^3+c*p^2+d*p+e

    //when we need hash value 2 to 4 that means "bcd" no need to a*p^3 value
    // due value arr[2-1]=a*p^3 (power=substing length)
    //hast value for bcd= arr[4]-arr[2-1]

    //when we neet to hash value "de" 4 to 5 substring
    //hash value de=arr[5]-arr[3];
    //arr[3]=(a*p^2+b*p^1+c)*p^2 (substring length)
ll power(ll p, int len){
    ll ans=1; 
    for(int i=1; i<=len; i++)
        ans=(ans*p)%mod;
    return ans;
}
void solve(){
  string str; cin >> str;
  int p=2,n=str.size(); // prime (p)
  ll arr[n+4];
  arr[0]=0;
  for(int i=0; i<n; i++){
    arr[i+1]=((arr[i]*p)%mod+str[i])%mod;
  }

  int query; cin >>query;
  while (query--)
  {
    int l,r; cin >> l >> r;
    int len=(r-l)+1;
    ll ans1=arr[r];
    ll ans2=arr[l-1];
    ll pw=power(p,len);
    ans2=(ans2*pw)%mod;
    cout<<ans1-ans2<<endl;
  }
  
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
  //cin>>t;
    while(t--)solve();
    return 0;
}
