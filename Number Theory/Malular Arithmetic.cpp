///Bismillahhir Rahmanir Rahim
///MD. SAYEDUL ISLAM
///Dhaka University of Engineering & Technology(DUET)
#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define precision(n) fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;
#define vi vector<ll>
#define ivi(v) for(auto & i:v)cin>>i
#define outvi(v) for(auto & i:v)cout<<i<<' '
#define pb    push_back
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define ll long long int
#define ull unsigned long long int
#define fo(x,n) for(int i=x; i<n; i++)
using namespace std;
///                 Modular Arithmetic      ////

///                 Modular Inverse      ////
        ///(a/b)%m  =(a*b^m-2)%m
 int power(int base,int p,int m){
    int res=1;
    while(p){
        if(p%2==1){
            res=(res*base)%m;
            p--;
        }
        else{
            base=(base*base)%m;
            p/=2;
        }
    }
    return res%m;
 }
/*                  /// check big number divide by m

       (a+b)%m=((a%m)+(b%m))%m
       given n= 1022233342222244444444444442323000 % 5 . is n divide by 5?
       string =n; convert int index wise and modulas by 5    */
int res[MAX];
void solve(){
   string s;cin>>s;
   int ans=0,m=5;
   for(int i=0; i<s.size(); i++){
    ans=(ans*10)+(s[i]-'0');
    ans=ans%m;
   }
   if(ans==0)yes;
    else no;
}
int main() {
    fast();
    ll a,b,m;cin>>a>>b>>m;/// (a/b)%m  =(a*b^m-2)%m
    int x=power(b,m-2,m);/// Biary exponentiation for using power calculate
    int ans=(a*x)%m;
    cout<<ans<<endl;
    //solve();

    return 0;
}
