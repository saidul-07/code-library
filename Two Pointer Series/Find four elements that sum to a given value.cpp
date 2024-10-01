///Bismillahhir Rahmanir Rahim
///MD. SAYEDUL ISLAM
///Dhaka University of Engineering & Technology(DUET)
#include<bits/stdc++.h>
using namespace std;
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define precision(n) fixed<<setprecision(n)  //example cout<<precision(3)<<n<<endl;
#define pb    push_back
#define endl '\n'
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define lli long long int
#define ulli unsigned long long int
#define fo(x,n) for(int i=x; i<n; i++)
/*


                Find four elements that sum to a given value
   -----------------------------------------------------------------

   given an array of size N and x. Find out such as four element whose sum is equal to x.
       n  x
       6 10
       1 2 3 0 4 6

       1 2 3 4 sum=x
       1 3 0 6 sum=x

       problem link:
       https://codeforces.com/problemset/problem/1462/A
    */
int ind1,ind2;
void solve(){

       int n,x;cin>>n>>x;
       vector<int>v(n);
       for(int i=0; i<n; i++)cin>>v[i];
       for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            int l,r;
            l=j+1;r=n-1;
            while(l<r){
                int sum=v[i]+v[j]+v[l]+v[r];
                if(sum==x)
                    cout<<v[i]<<' '<<v[j]<<' '<<v[l]<<' '<<v[r]<<endl;
                if(sum>x)r--;
                else l++;
            }
        }
    }

}
int main() {
    //fast();
    solve();

    return 0;
}

