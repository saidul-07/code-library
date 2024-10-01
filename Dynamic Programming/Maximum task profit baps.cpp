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
    -> You are given N task Each task has a starting time, finish time,
        and a profit. you can do any number of non-overlapping tasks and 
        and get the profit associated with them. your goal is to maximize 
        total profit. N(1<=10^3)
     -> given start time, end time and profit
         5
         1 5 10 ->
         4 12 20 
         13 15 8 ->
         7 14 15
         8 10 11 ->
         ans = 29

     */

    vector < tuple < int, int, int>>task;
    vi st;
    int dp[100000+5];
    int maxprofit(int pos ){
        int n= st.size();
        if (dp[pos] != -1) return dp[pos];
        if( pos >= n) return 0;
        auto [ s, e, p ] = task[pos];
        int next = upper_bound(st.begin(), st.end(),e)-st.begin();
        int ans = maxprofit( pos+1 );
            ans = max ( ans, maxprofit( next )+p);
        return dp[pos] = ans;
    }
    // complexity O(nlogn) that's whay n upper limit 10^5
void solve(){
    int n; cin >> n;
    fo(0,n){
        int start, end, profit;
        cin >> start >> end >> profit;
        task.pb({start, end, profit});
        st.pb(start);
    }
        sort( task.begin(), task.end());
        //for(auto [s,e,p]: task) cout << s <<' ' << e <<' '<< p<< endl;
        sort( st.begin(), st.end());
        cout << maxprofit(0) << endl;

}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    memset( dp, -1, sizeof(dp));
    int t; t = 1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

