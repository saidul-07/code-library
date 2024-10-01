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
  
    /* Statement:
    -> Given an array with N(1<=10^5) integers. Find a subsequence
        of this array to maximize the following expression:
     -> a[b1] - a[b2] + a[b3] - a[b4].....

     if arr: 3 1 -1 100 2   (3 - *(-1)+ 100)= 104
     
     */

int dp[100000+5][2];
vi v;
int calculatemax (int pos, int pre){
    int n = v.size();
    if( pos >= n) return 0;
    if(dp[pos][pre] != -1) return dp[pos][pre];
    int ans = calculatemax ( pos+1, pre);
    if (pre == 1)
        ans = max (ans, calculatemax(pos+1, 0 )+v[pos]);
    else ans = max (ans, calculatemax(pos+1, 1)-v[pos]);
        
    return dp[pos][pre] = ans;
}
    // complexity O(n) that's whay n upper limit 10^5
void solve(){
    int n; cin >> n;
    fo(o,n){
        int x; cin >> x;
        v.pb(x);
    }
    cout << calculatemax ( 0, 1);
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

