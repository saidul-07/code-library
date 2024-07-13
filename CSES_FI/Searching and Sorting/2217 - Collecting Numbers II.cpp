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
    int n, m; cin >> n >> m;
    vi v(n); ivi (v);
    vi idx(n+1);
    for(int i=0; i<n; i++){
        idx[v[i]]=i;
    }
    for(auto u:idx)cout<<u<<' ';
    cout<<endl;
    while(m--){
        int a, b; cin >> a >> b;
        swap(idx[a],idx[b]);
        for(auto u:idx)cout<<u<<' ';
        cout<<endl;
        int ans=1;
        for(int num=1; num<n; num++){
            if(idx[num+1]<idx[num])ans++;
        }
        cout<<ans<<endl;
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



