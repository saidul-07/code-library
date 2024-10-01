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

const int sz= 1e6+7;
int dp[sz];
int numberofcoin(int amount, vector<int>&coins){
    if(amount == 0) return 0;
    int ans = INT_MAX;
    if ( dp[amount]!=-1) return dp[amount];
    for(int coin : coins){
        if( amount - coin >=0)
            ans = min ( ans, numberofcoin(amount-coin,coins)+1);
    }
    return dp[amount] = ans ;
}
void solve(){
   int n, amount; cin >> n >> amount;
   vi v(n); ivi (v);
   int res = numberofcoin(amount, v);
    (res==INT_MAX)? cout<< -1 <<endl :cout<< res;
}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif

    memset( dp, -1, sizeof(dp));
    int t;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

