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
#define      fo(x,n)       for(int i=0; i<n; i++)
#define      fo1(x,n)       for(int i=1; i<=n; i++)
#define      endl          '\n'
#define      yes           cout<<"YES"<<endl
#define      no            cout<<"NO"<<endl
#define      precision(n)  fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;


void solve(){
    ll n, m, k; cin>> n >> m >> k;
    vi a(n), b(m); ivi (a); ivi (b);

    sort(a.begin(),a.end());
    sort(b.begin(),b.end());
//    for(auto u:a)cout<<u<<' ';
//    cout<<endl;
//    for(auto u:b)cout<<u<<' ';
//    cout<<endl;
    int cn=0,left=0;
    for(int i=0; i<n; i++){
        for(int j=left; j<m; j++){
            if(abs(a[i]-b[j])<=k){
                cn++;
                left=j+1;
                break;
            }
            if((a[i])<b[j])break;
        }
    }
    cout<<cn<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}



