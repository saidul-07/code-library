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
    -> Given an array with N(1<10^3) integers. Find a subsequence(a[b1], a[b2]....)
        of this array to maximize the following expression:
     -> 1*a[b1]+2*a[b2]+3*a[b3].....
     
     if arr: 3 1 -1 100 2   (1*3 + 2*1 + 3*-1 + 4*100 + 5*2)= 412 //take negative value
     if arr: 3 1 -100 100 2 (1*3 + 2*1 + 3*100 + 4*2)= 313  // ignoring negative value
     */

int dp[1000+5][2];
vi v;
int calculatemax (int pos, int pos2){
    int n = v.size();

    if( pos > n) return 0;
    if (dp[pos][pos2] != -1) return dp[pos][pos2];

    int ans = calculatemax ( pos+1, pos2);
    ans = max (ans, calculatemax(pos+1, pos2+1)+pos2*v[pos]);

    return dp[pos][pos2] = ans;
}
    // complexity O(n^2) that's whay n upper limit 10^3
void solve(){
    int n; cin >> n;
    fo(o,n){
        int x; cin >> x;
        v.pb(x);
    }
    cout << calculatemax ( 0,1);
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

