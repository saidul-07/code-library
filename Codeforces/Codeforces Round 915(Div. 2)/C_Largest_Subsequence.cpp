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
    int n; string str,sub,s;
    cin >> n >> str;
    s=str;
    sort(s.begin(),s.end());
    if(s==str){
        cout<<0<<endl;
        return;
    }
    char ch=str[n-1];
    vi v;
    for(int i=n-1; i>=0; i--){
        if(str[i]>=ch){
            sub+=str[i];
            v.pb(i);
            ch=str[i];
        }
    }
    reverse(v.begin(),v.end());
    int id=0;
    for(int i=0; i<n; i++){
        if(i==v[id]){
            str[i]=sub[id];
            id++;
        }
    }
    //cout<<str<<' '<<sub<<' '<<s<<endl;

    if(is_sorted(str.begin(),str.end())){
        int ans=sub.size();
        for(auto u:sub)if(u==ch)ans--;
        cout<<ans<<endl;
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



