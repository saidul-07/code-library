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
    /* 
    -> Given 2*N Grid, how many ways we can cover the whole grid with tilies?
    -> tiles size: 2*1, 2*2
    -> No rotation allowed
     */
int dp[1000000];
int numberofway(int position){
    
    if( position == 1 ) return 1;
    if( position == 2 ) return 2;
    if( dp[position] != -1 ) return dp[position];
    return dp[position] = numberofway( position - 1 ) + numberofway( position - 2 );
}
void solve(){
    int n; cin >> n;
    cout << numberofway(n) << endl;
    
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

