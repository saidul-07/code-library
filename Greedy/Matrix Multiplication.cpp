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

void solve( )
{
    int n,sum=0;cin>>n;
    int a[n][n],b[n][n],p[n][n];
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>a[i][j];
        }
    }cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cin>>b[i][j];
        }
    }cout<<endl;
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            for(int k=0; k<n; k++){
                sum+=a[i][k]*b[k][j];
            }p[i][j]=sum;
            sum=0;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            cout<<p[i][j]<<' ';
        }cout<<endl;
    }
}
int main() {
    //fast();
    int t=1;
     //cin>>t;
    while(t--)solve();

    return 0;
}

