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

int dp[200][200000];
bool func( int i, int sum, vector <int> &v){
    if( sum == 0 ) return true;
    if( i < 0) return false;
    if(dp[i][sum] != -1) return dp[i][sum];
    // don't consider element
    bool Possible = func( i-1, sum, v );
    // consider element
    if( (sum - v[i])>=0 )
         Possible |= func (i-1, sum-v[i], v );
    return dp[i][sum] = Possible;
}
void solve(){
    int n; cin >> n;
    vi v(n); ivi (v);
    int sum = accumulate( v.begin(), v.end(),0 );
    if ( sum %2!= 0){
        cout << 0 << endl;
        return;
    }
    sum/=2;
    cout << func ( n-1, sum , v) << endl;
    
}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    memset( dp , -1, sizeof(dp));
    int t;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

