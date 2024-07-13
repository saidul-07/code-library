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

int gcd(int a,int b){
    while(b!=0){
        int tmp=a%b;
        a= b;
        b= tmp;
    }
    return a;
}
int lcm(int a,int b){
    return (a*b)/gcd(a,b);
}
void solve(){
    int n; cin>>n;
    vi v(n); ivi (v);
    ll z=1;
    for(auto u:v){
        z=lcm(z,u);
    }
    int sum=0;
    for(auto u:v)
        sum+=z/u;
    if(sum<z){
    for(auto u:v){
            cout<<z/u<<' ';
            }
        cout<<endl;
        }
    else cout<<-1<<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   cin>>t;
    while(t--)solve();
    return 0;
}



