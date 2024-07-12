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
ll reward (vector<vector<int>>&v ,int n){
    ll curtime = 0, rewa = 0;
    for(int i = 0; i < n; i++){
        curtime += v[i][0];
        rewa += v[i][1] - curtime;
    }
    return rewa;
}
void solve(){
    int n; cin >> n;
    vector<vector<int>>task;
    for(int i=0; i<n; i++){
       int x, y; cin >> x >> y;
       task.pb({x,y});
    }
   sort(task.begin(),task.end());
   cout<< reward (task,n) <<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}
