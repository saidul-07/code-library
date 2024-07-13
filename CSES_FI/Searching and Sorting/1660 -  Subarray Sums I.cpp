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
#define      vi            vector<ll>
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
    ll n, x; cin >> n >> x;
    vi v(n); ivi (v);
    vi presum(n,0);
    presum[0] = v[0];
    for(int i =1; i < n; i++)
        presum[i]= presum[i-1]+v[i];
    
    ll ans=0,j=0;
    for(int i=0; i<n; i++){
        if(presum[i]>x){
            while (j<i)
            {
                ll p=presum[i]-presum[j];
                if(p==x){
                    ans++;
                    break;
                }
                else if(p<x)break;
                j++;
            }  
        }
        else if (presum[i]==x)ans++;
    }
    cout << ans << endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}
