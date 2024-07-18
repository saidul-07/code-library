                /********************************************************/
                /********************************************************/
                /**              BISMILLAHIR RAHMANIR RAHIM            **/
                /**        Read the name of Allah, who created you     **/
                /**                 MD. SAYEDUL ISLAM                  **/
                /**   Department of Computer Science and Engineering   **/
                /** Dhaka University of Engineering & Technology(DUET) **/
                /**                                                    **/
                /********************************************************/
                /********************************************************/

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


void solve(){
    int n, k; cin >> n >> k;
    string s, t; cin >> s >>t;
    int s0=0, s1=0, t0=0, t1=0,dif=0;
    for(int i=0; i<s.size(); i++){
        if(s[i]=='0') s0++;
        if(s[i]=='1') s1++;
        if(t[i]=='0') t0++;
        if(t[i]=='1') t1++;

        if(s[i]!=t[i])dif++;
    }
   // cout <<s0<<' '<<s1<<' '<<t0<<' '<<t1<<' '<<dif<<endl;
    bool check=0;
    if((dif/2)<=k and s.size()>2)check=true;
    if(s0==t0 && s1==t1 && (check))
        yes;
    else no;
}
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    //seive();
    int t,i;t=1;
   cin>>t;
    while(t--)solve();
    return 0;
}


