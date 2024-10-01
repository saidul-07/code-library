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
const int N = 1e5+10;
int height[N];
int k,dp[N];
int calculatecost(int i){
    int cost=INT_MAX;
    
    if(i==0) return 0;
    if(dp[i]!=-1) return dp[i];
    for( int j =1; j <= k; j++){
        if(i-j >=0)
        cost = min ( cost, calculatecost(i-j)+abs(height[i]-height[i-j]));
    }
    return dp[i] = cost;
}
void solve(){
    int n; cin >> n >> k;
    fo(0,n) cin >> height[i];
    cout << calculatecost(n-1) << endl;
    
}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    memset(dp, -1, sizeof(dp));
    int t,i;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

