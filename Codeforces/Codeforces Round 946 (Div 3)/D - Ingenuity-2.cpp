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
    string s; cin>>s;
    int x=0,y=0;
    set<char>st;
    for(int i=0; i<n; i++){
        st.insert(s[i]);
        if(s[i]=='E')x++;
        else if(s[i]=='W')x--;
        else if(s[i]=='N')y++;
        else y--;
    }
    map<char,int>mp;
    map<char,ll>last;
    if(x==0 && y==0 && n==2){
        no;
        return;
    }
    else if(x%2==0 && y%2==0){
        for(int i=0; i<n; i++)mp[s[i]]++;
        if(n==4 && st.size()==4){
            for(int i=0; i<n; i++){
                if(s[i]=='N' || s[i]=='S')
                    cout<<'H';
                else cout<<'R';
            }
            cout<<endl;
            return;
        }
        for(int i=0; i<n; i++){
            last[s[i]]++;
            if(last[s[i]]<=mp[s[i]]/2)
                cout<<'H';
            else cout<<'R';
        }
        cout<<endl;
    }
    else no;

}
int main() {
    fast();
    //seive();
    int t,i;t=1;
   cin>>t;
    while(t--)solve();
    return 0;
}


