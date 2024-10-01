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
    -> you are given string. you need to find maximum palindromic subsequence length.
     -> given string: xycmczy
        palindromic subsequence: ycmcy

        maximum subsequence length = ycmcy (ans = 5)

     */

int dp[1000+5][1000+5];
string str;
int func(int s, int e){
    if ( s == e ) return 1;
    if ( s > e) return 0;
    if(dp[s][e] != -1) return dp[s][e];

    if(str[s] == str[e] ){
        // as str[s] and str[e] is equal, we should take these 2 charcter and find the maximum
        // palindromic subsequence from the remaining substring as func(s+1, e-1) and add 2 with it.
        return dp[s][e] = func( s+1, e-1 )+2; 
        }
    else {
        // as str[s] and str[e] doesn't match, so now we have 2 option
        //1. we can remove the str[s] and find maximum answer from the remaining string
        //2. we can remove the str[e] and find maximum answer from the remaining string
        int val1 = func( s+1, e);
        int val2 = func( s, e-1);
        return dp[s][e] = max (val1, val2);
    }
}
    
void solve(){
    cin >> str;
    int ans = 0;
    for(int i = 0; i < str.size(); i++){
        for( int j = i; j < str.size(); j++){
            ans = max (ans, func(i, j));
        }
    }
    cout << ans << endl;

}// complexity O(n^2) that's whay n upper limit 10^3
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

