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
#define      fast()        ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define      ll            long long int
#define      ull           unsigned long long int
#define      mod           1000000007
#define      vi            vector<int>
#define      ivi(v)        for(auto & i:v)cin>>i
#define      outvi(v)      for(auto & i:v)cout<<i<<' '
#define      pb            push_back
#define      fo(x,n)       for(int i=x; i<n; i++)
#define      fo1(x,n)       for(int i=x; i<=n; i++)
#define      endl          '\n'
#define      yes           cout<<"YES"<<endl
#define      no            cout<<"NO"<<endl
#define      precision(n)  fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;


void solve(){
    int n;cin>>n;
    map<pair<int,int>,int>mp1,mp2,mp3;
    map<tuple<int,int,int>,int>mp4;
    vi v(n+1);
    fo1(1,n)cin>>v[i];
    int ans=0;
    for(int i=1; i<=n-2; i++){
        auto ab=make_pair(v[i],v[i+1]);
        auto ac=make_pair(v[i],v[i+2]);
        auto bc=make_pair(v[i+1],v[i+2]);
        auto abc=make_tuple(v[i],v[i+1],v[i+2]);
        ans+=mp1[ab]+mp2[ac]+mp3[bc]-mp4[abc]*3;
        mp1[ab]++,mp2[ac]++,mp3[bc]++,mp4[abc]++;
    }
    cout<<ans<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   cin>>t;
    while(t--)solve();
    return 0;
}


