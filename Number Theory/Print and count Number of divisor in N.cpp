#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(0);cout.tie(0);
#define ll    long long int
#define pb    push_back
#define endl '\n';
using namespace std;
/* ------------print and count number of divisor in N:
    12-> 1, 2, 3, 4, 6, 12
         (1,12),(2,6),(3,4) pair of divisor in N
         sqrt(12)=3 find out divisor upto 3
         we can using set for solve this problem because set is distinct
         value container when N=36 sqrt(36)=6 so that 6 is double.
         */
void solve(){
        int n;cin>>n;
        set<int>s;
        for(int i=1; i*i<=n; i++){
            if(n%i==0){
                s.insert(i);
                s.insert(n/i);
            }
        }for(auto u:s)cout<<u<<' ';
        cout<<endl;
        cout<<"number of divisor="<<s.size();
    }
int main() {
    fast();
    solve();

    return 0;
}

