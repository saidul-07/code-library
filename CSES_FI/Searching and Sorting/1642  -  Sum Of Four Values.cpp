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
    ll n, x; cin >> n >> x;
    vector<vector<ll>>data;
    for(int i=0; i<n; i++){
        int a; cin >> a;
        data.pb({a,i+1});
    }
    sort( data.begin(), data.end());
    ll idx1, idx2, idx3, idx4;
    for(idx1 = 0; idx1 < n-3; idx1++){
        for(idx2 = idx1+1; idx2 < n-2; idx2++){
            idx3=idx2+1;
            idx4=n-1;
            while (idx3<idx4)
            {
                ll res=data[idx1][0]+data[idx2][0]+data[idx3][0]+data[idx4][0];
                if(res==x){
                    cout<<data[idx1][1]<<' '<<data[idx2][1]<<' '<<data[idx3][1]<<' '<<data[idx4][1]<<endl;
                    return;
                }
                else if(res<x)idx3++;
                else idx4--;
            }  
        }
    }
    cout<<"IMPOSSIBLE"<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}
