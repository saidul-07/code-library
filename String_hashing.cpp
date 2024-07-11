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

//  Hash(str)=str[0]*p^0+str[1]*p^1+str[1]*p^2..........n string convert into integer
// p=prime number

int gethash(string st){
    int prime=3,power=1,ans=0;
    for(int i=0; i<st.size(); i++){
        ans=(ans+st[i]*power)%mod;
        power=(power*prime)%mod;
    }
    return ans;
}
void solve(){
  string str; cin >> str;
  int ans=gethash(str);
  cout<< ans <<endl;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
  //cin>>t;
    while(t--)solve();
    return 0;
}
