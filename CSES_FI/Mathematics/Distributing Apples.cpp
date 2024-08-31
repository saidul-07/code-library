#include<bits/stdc++.h>
using namespace std;
#define      fast()        ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define      ll            long long int
#define      ull           unsigned long long int
#define      mod           1000000007
#define      vi            vector<ll>
#define      ivi(v)        for(auto & i:v)cin>>i
#define      outvi(v)      for(auto & i:v)cout<<i<<' '
#define      pb            push_back
#define      fo(x,n)       for(int i=0; i<n; i++)
#define      fo1(x,n)       for(int i=x; i<=n; i++)
#define      endl          '\n'
#define      yes           cout<<"YES"<<endl
#define      no            cout<<"NO"<<endl
#define      precision(n)  fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;
#define N 2000006
ll fact[N];
ll inverseMod(ll a, ll b){  //Time complexity log(n)
    if(b == 0) return 1; //b^0 = 1

    if(b%2==0){ // a^50 , x = a^25, x*x=a^50
        ll x = inverseMod(a,b/2);
        return (x*x)%mod;
    }
    else { // a^25, x=a^12, x*x=(a^24)*a= a^25 
        ll x = inverseMod(a, b/2);
        return (((x*x)%mod)*a)%mod;
    }
    return 0;
}

void solve(){
      
        ll n, m; cin >> n >> m;
         
        ll a = n+m-1, r =n-1;
        //cout <<fact[a]<< ' '<<fact[r]<<' '<<fact[a-r]<<endl;

        ll res=(fact[a]*(inverseMod((fact[r]*fact[a-r])%mod,mod-2)%mod))%mod;
        
        // if(r==0) cout<< 1<<endl;
        // else if(r>a) cout<< 0<<endl;
         cout << res << endl;
}

int main() {
    fast();
    fact[0] =1;
    for(int i =1; i<=N; i++){
        fact[i] = (fact[i-1]*i)%mod;
    }
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t,i;t=1;
    //cin>>t;
    while(t--)solve();
    return 0;
}

