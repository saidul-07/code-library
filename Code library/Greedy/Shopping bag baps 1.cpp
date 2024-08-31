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
    /* Statement:
    -> Given N items having weight and price. choose items with a maximum
        total price. Total weight cannot exceed W. you can take a fractional
        part of an item. The price will be adjusted according to the ratio.
    
    -> item n and total weight w
        n->3 w->20
        w  p
        50 4000
        6 1200
        10 3000
     */
    
void solve(){
    int n, t_weight; cin >> n >> t_weight;
    vector<pair<int,int>>product;
    for ( int i = 0; i < n; i++){
        int w, r; cin >> w >> r;
        product.pb({r/w, w});
    }
    sort(product.rbegin(), product.rend());
    int price = 0;
    for(auto [r,w]: product){
        cout << r << ' '<< w <<endl;
        if( t_weight <= 0) break;
        if(t_weight >= w){
            price += w*r;
            t_weight -= w;
        }
        else{
                price += r*t_weight;
                t_weight = 0;
        }
    }
    cout << price << endl;

}// complexity O(n^2) that's whay n upper limit 10^3
int main() {
    fast();

    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    
    int t,i;t=1;
   //cin>>t;
    while(t--)solve();
    return 0;
}

