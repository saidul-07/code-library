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
    /* Statement:
    -> Given an array with N integers, find a subsequence of this array
     to maximize the sum ot the subsequence.
     -> condition:can't take 2 consecutive numbers
     arr: 7 10 7 -2 3
     maxsum= 17
     */

int dp[1000000][2];
vi v;
int calculatemax (int pos, int pre){
    int n = v.size();

    if( pos == n ) return 0;
    if ( dp[pos][pre] != -1) return dp[pos][pre];
    if( pre == 0 ){  // as pre =0, we can take v[pos] element or don't take
        int val1 = calculatemax( pos+1, 0 ); // ignoring v[pos] element
        int val2 = calculatemax( pos+1, 1 ) + v[pos]; // taking v[pos] element

     return dp[pos][pre] = max (val1, val2);
    }
    else{
        // as pre =1, we can't take v[pos], so only one option
        int val = calculatemax (pos+1, 0);
        return dp[pos][pre] = val;
    }
}
void solve(){
    int n; cin >> n;
    fo(o,n){
        int x; cin >> x;
        v.pb(x);
    }
    cout << calculatemax ( 0,0);
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

