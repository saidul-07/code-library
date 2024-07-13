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

int res(vector<int>&v,double mid,int k){
    int cnt=0;
    for(auto u:v)
        cnt+=floor(u/mid);
    if(cnt>=k)return true;
    else return false;
}
void solve(){
    int n,k; cin >> n >> k;
    double l=0,r=1e9;
    vi v(n);
    for(int i=0; i<n; i++){
        cin>>v[i];
    }//cout<<l<<' '<<r<<endl;
    cout<<precision(7);
    while(l+1<r){
        double mid=(l+r)/2;
        if(res(v,mid,k)) l=mid;
        else r=mid;
    }
    cout<<l<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}



