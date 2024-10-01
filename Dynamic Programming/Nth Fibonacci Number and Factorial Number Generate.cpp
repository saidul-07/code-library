#include<bits/stdc++.h>
using namespace std;
///      nth fibonacci number         Time complexity O(n)      ////////
long long int dp[1000+1];
long long int fibo(int n){
    dp[0]=0,dp[1]=1;
    if(n==0)return 0;
    if(n==1)return 1;
    if(dp[n]!=-1)return dp[n];
    else return dp[n]=fibo(n-1)+fibo(n-2);
}
int main()
{
    memset(dp,-1,sizeof(dp));
    fibo(1000);
    cout<<dp[108]<<endl;

    return 0;
}
/*//   nth fibonacci number   Time complexity O(n)      ////////
#include<bits/stdc++.h>
using namespace std;
long long int dp[1000+1];
long long int fact(int n){
    dp[0]=1;
    if(n==0)return 1;
    if(dp[n]!=-1)return dp[n];
    else return dp[n]=n*fact(n-1);
}
int main(){
    memset(dp,-1,sizeof(dp));
    fact(30);
    cout<<dp[2]<<endl;
    return 0;
}
*/
