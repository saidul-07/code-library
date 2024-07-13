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
    int n; cin>>n;
    int matrix[n][n];
    vi v;
    for(int i=0; i<n; i++){
           int p=(1<<30)-1;
        for(int j=0; j<n; j++){
            cin>>matrix[i][j];
            if(i==j)continue;
            p&=matrix[i][j];
        }
        v.pb(p);
    }//for(auto u:v)cout<<u<<' ';

    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((i!=j) && (matrix[i][j]!=(v[i]|v[j]))){
                no;
                return;
            }
        }
    }
    yes;
    for(auto u:v)cout<<u<<' ';
    cout<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   cin>>t;
    while(t--)solve();
    return 0;
}


