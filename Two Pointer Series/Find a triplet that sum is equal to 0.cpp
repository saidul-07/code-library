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


               Find the triplets with zero sum
   -------------------------------------------------------

   given an array of size N. Find out such as tiplest index whose sum  0.
       n=6
       1 -1 0 2 -2 3
       (1,-1,0)sum=0
       (-1,-2,3)sum=0
       (0,2,-2) sum=0



    */
int ind1,ind2;
void solve(){
        int n;cin>>n;
        vector<int>v(n);
        for(int i=0; i<n; i++)cin>>v[i];

        for(int i=0; i<n; i++){
                unordered_set<int>s;
            for(int j=i+1; j<n; j++){
                int x= -(v[i]+v[j]);
                if(s.find(x)!=s.end())
                    cout<<"("<<x<<' '<<v[i]<<' '<<v[j]<<")"<<endl;
                else s.insert(v[j]);
            }

        }

    }
int main() {
    //fast();
    solve();

    return 0;
}

