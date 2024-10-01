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

const int sz = 25e2+10;
vi v(sz);
int dp[sz];
int lis(int i){
    int ans = 1;
    if( dp[i]!=-1) return dp[i];
    for( int j = 0; j < i; j++){
        if( v[i] > v[j])
            ans = max ( ans, lis(j)+1);
    }
    return dp[i] = ans;
}
void solve(){
   int n; cin >> n;
   fo(0,n) cin >> v[i];
   int ans = 0;
   for( int i = 0 ; i < n; i++)
        ans = max ( ans , lis(i));

    cout << ans << endl;
    
}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
   memset(dp, -1, sizeof(dp));
    int t; t = 1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

