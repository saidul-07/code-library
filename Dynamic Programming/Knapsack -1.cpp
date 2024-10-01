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
const int sz = 2e5+10;
int wt[105],val[105];
int dp[105][sz];
ll maxprice ( int ind, int wt_left){
    if( wt_left == 0 ) return 0;
    if( ind < 0 ) return 0;
    if(dp[ind][wt_left] != -1) return dp[ind][wt_left];
    ll ans = maxprice ( ind - 1, wt_left);
    if( wt_left - wt[ind]>=0 )
        ans = max ( ans, maxprice(ind-1,wt_left-wt[ind])+val[ind]);
    return dp[ind][wt_left] = ans;
}
void solve(){
    int n, w; cin >> n >> w;
    for( int i = 0; i < n; i++)
        cin >> wt[i] >> val[i];
    cout << maxprice( n-1, w) << endl;
    
}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    memset(dp, -1, sizeof(dp));
    int t;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

