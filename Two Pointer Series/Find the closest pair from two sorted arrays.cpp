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


               Find the closest pair from two sorted arrays
   -------------------------------------------------------

   given an array and x value. Find out such as pair whose sum is closest x.
       n
       1 2 3 4 5
       m
       6 7 8 9 10
       if x=15
       5+10=15


 test case5 7 12
            1 2 3 4 5
            4 5 6 7 8 9 10
            (4 8)  12
    */
int ind1,ind2;
void solve(vector<int>v1,vector<int>v2,int n,int m,int x){
        int l=0,r=m-1,dif=INT_MAX;
        while(l<n && r>0){
            int sum=v1[l]+v2[r];
            if(abs(sum-x)<dif){
                ind1=l;
                ind2=r;
                dif=abs(sum-x);
                }
            if(sum>x)r--;
            else l++;
        }
        cout<<"("<<v1[ind1]<<' '<<v2[ind2]<<")  "<<v1[ind1]+v2[ind2]<<endl;
    }
int main() {
   // fast();
    int n,m,x;cin>>n>>m>>x;
    vector<int>v1(n),v2(m);
    for(int i=0; i<n; i++)cin>>v1[i];
    for(int i=0; i<n; i++)cin>>v2[i];
    sort(v1.begin(),v1.end());
    sort(v2.begin(),v2.end());
    solve(v1,v2,n,m,x);

    return 0;
}

