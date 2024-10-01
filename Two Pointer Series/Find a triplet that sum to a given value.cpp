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


                Find a triplet that sum to a given value
   -----------------------------------------------------------------

   given an array of size N and x. Find out such as tiplest index whose sum is equal to x.
       n  x
       6  7
       1 2 4 6 3 0

       (1,2,4)sum=7
       (1,6,0) sum=7
        (4,3,0)sum=7
    */
int ind1,ind2;
void solve(){
        int n,x;cin>>n>>x;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];
        sort(v.begin(),v.end());
        for(int i=0; i<n; i++){
            int l,r;
            l=i+1;r=n-1;
            while(l<r){
                int sum=v[i]+v[l]+v[r];
                if(sum==x)
                    cout<<v[i]<<' '<<v[l]<<' '<<v[r]<<endl;
                if(sum>x)r--;
                else l++;
            }
        }
    }
int main() {
    //fast();
    solve();

    return 0;
}

