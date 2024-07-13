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
#define      fast()        ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
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
    ll n,ch=0,res=0,mn=INT_MAX,mx=INT_MIN;cin>>n;
    vector<ll>v1(n),v2(n+1);
    ivi (v1);ivi (v2);
    for(ll i=0; i<n; i++){
            if(min(v1[i],v2[i])<=v2[n] && max(v1[i],v2[i])>=v2[n])
                ch=1;
        res+=abs(v1[i]-v2[i]);
        mn=min(mn,abs(v1[i]-v2[n]));
        mn=min(mn,abs(v2[i]-v2[n]));
    }
    (ch)?cout<<res+1: cout<<res+mn+1;
    cout<<endl;

}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   cin>>t;
    while(t--)solve();
    return 0;
}


