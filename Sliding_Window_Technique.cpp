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
  //count substring within main strng using sliding window tecnique

   string mstr,substr; cin >> mstr >> substr; //mstr="abababa";
   string ch="";                              //substr="aba"
   for(int i=0; i<substr.size(); i++)
      ch+=mstr[i]; //stire sub portion of main string ch="aba"
    int ans=0;
    if(ch==substr)ans++;
    for(int i=substr.size(); i<mstr.size(); i++){
        ch+=mstr[i]; //add char from main string : abab
        ch.erase(ch.begin()+0); //remove first character from ch : a change bab
        if(ch==substr)ans++;
    }
    cout << ans << endl; // ans=3;
}
int main() {
    fast();
    //seive();
    int t,i;t=1;
  //in>>t;
    while(t--)solve();
    return 0;
}
