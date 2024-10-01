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

int dp[1005][1005];
int lcs(int i, int j, string &s1, string &s2){
    if( i<0 || j<0) return 0;
    if( dp[i][j] != -1) return dp[i][j];
    int ans = lcs ( i-1, j, s1, s2);
    ans = max ( ans , lcs (i, j-1, s1, s2));
    ans = max ( ans, lcs(i-1, j-1, s1, s2)+(s1[i]==s2[j]));
    return dp[i][j] = ans;
}
void solve(){
    string s1, s2; cin >> s1 >> s2;
    cout << lcs ( s1.size()-1, s2.size()-1, s1, s2 ) << endl;
    
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

