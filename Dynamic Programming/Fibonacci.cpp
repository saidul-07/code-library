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
const int sz = 1e5+10;
int dp[sz];
// Top Down approch
int fibo(int n){
    if (n==0) return 0;
    if (n==1) return 1;
    if(dp[n]!=-1) return dp[n];
   
    return dp[n]=fibo(n-1)+fibo(n-2);
    
}
void solve(){
    int n; cin >> n;
    cout <<fibo(n)<< endl;
    
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

