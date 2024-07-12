                /********************************************************/
                /********************************************************/
                /**              BISMILLAHIR RAHMANIR RAHIM            **/
                /**        Read the name of Allah, who created you     **/
                /**                 MD. SAYEDUL ISLAM                  **/
                /**   Department of Computer Science and Engineering   **/
                /** Dhaka University of Engineering & Technology(DUET) **/
                /**                                                    **/
                /********************************************************/
                /********************************************************/
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

void solve(){
   string str, sub; cin >> str >> sub;
   ll n = str.size(), m = sub.size();
   if(n<m){
    cout<<0<<endl;
    return;
   }
   ll p=7;
   ll val=0;
   ll arr[n+4];
   arr[0]=0;

  for(ll i=0; i<n; i++)
        arr[i+1]=(((arr[i]*p)%mod)+str[i])%mod;
    
   for(ll i=0; i<m; i++) val=(((val*p)%mod)+sub[i])%mod; // hasing sub string

   ll pw=1;
   for(ll i=1; i<=m; i++) pw=(p*pw)%mod;

   ll res=0;
   for(ll i=m; i<=n; i++){
    ll ans=arr[i];
    ll ans1=arr[i-m];
    ans1=(ans1*pw)%mod;
    ans=ans-ans1;
    if(ans<0)ans+=mod;
    if(val==ans) res++;
   }
   cout <<  res << endl;
}
int main() {
    fast();
    //seive();
    int t;t=1;
  //in>>t;
    while(t--)solve();
    return 0;
}
