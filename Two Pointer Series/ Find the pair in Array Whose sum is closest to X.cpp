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


               Find the pair whose sum is closest to x
   -------------------------------------------------------

   given an array and x value. Find out such as pair whose sum is closest x.
   if x=15
        pair-1 sum=13->2(dif)
             2    =12->3
             3    =17->2
             4    =16->1(colsest pair)

    test case   5 15
                2 4 5 8 10
                (5 10)  15
    */
int ind1,ind2;
void solve(vector<int>v,int n,int x){
        int l=0,r=n-1,dif=INT_MAX;
        while(l<r){
            int sum=v[l]+v[r];
            if(abs(sum-x)<dif){
                ind1=l;
                ind2=r;
                dif=abs(sum-x);
                }
            if(sum>x)r--;
            else l++;
        }
        cout<<"("<<v[ind1]<<' '<<v[ind2]<<")  "<<v[ind1]+v[ind2]<<endl;
    }
int main() {
   // fast();
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    solve(v,n,x);

    return 0;
}

