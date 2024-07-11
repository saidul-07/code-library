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
    int n, m; cin >> n >> m;
    vector<string>a(n);
    for(auto &row:a)cin >> row;
    vector<string>b(n);
    for(auto &col:b)cin >> col;
    int rsum,csum;
    for(int i=0; i<n; i++){
            rsum=0,csum=0;
        for(int j=0; j<m; j++){
            rsum+=a[i][j]-48;
            csum+=b[i][j]-48;
            }
        if(rsum%3!=csum%3){
            cout<<"NO"<<endl;
            return;
        }
    }
    for(int i=0; i<m; i++){
        rsum=0,csum=0;
        for(int j=0; j<n; j++){
            rsum+=a[j][i]-48;
            csum+=b[j][i]-48;
            }
        if(rsum%3!=csum%3){
            cout<<"NO"<<endl;
            return;
        }
    }
    cout<<"YES"<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
    cin>>t;
    while(t--)solve();
    return 0;
}
