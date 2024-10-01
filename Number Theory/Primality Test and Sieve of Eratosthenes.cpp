#include<bits/stdc++.h>
#define fast()  ios_base::sync_with_stdio(false); cin.tie(NULL);cout.tie(NULL);
#define lli    long long int
#define pb    push_back
#define endl '\n';
#define yes cout<<"YES"<<endl;
#define no cout<<"NO"<<endl;
#include<bits/stdc++.h>
using namespace std;
/*Sieve of Eratosthenes algo (1 to n primary number count)
    2   3   4   5   6   7   8   9   10  11  12  13  14
    15  16  17  18  19  20  21  22  23  24  25  26  27
    28  29  30
        first off all all element define flase(0) with global array
        if 2=0 then all divisor define (true)1 divisor(4,6,8,10,12,14,16,18,20,22,24,26,28,30)
        now 3=0 so all divisor define true(1) divisor(6,9,12,15,18,21,24,27,30)
        now 4 is true so is not working then 5 is 0 all divisor define 1
        finally if check element false the number is prime */
void primesieve(int n)
{
    bool prime[n+3]={0};
    for(int i=2; i*i<=n; i++){
        if(prime[i]==false){
            for(int j=i*i; j<=n; j+=i){
                prime[j]=true;
            }
        }
    }
    for(int i=2; i<=n; i++){
        if(prime[i]==false) cout<<i<<' ';
    }cout<<endl;
}

/* Primality Test if N=7 divisor (1,7) is prime
    N=12 divisor  (1,12),(2,6),(3,4) 2*6=12 so no need to check by 6 also 4
    so we can loop up to sqrt(n). sqrt(12) =3 */
bool prime_check(int n)
{
    if(n<2)return false;
    if(n<=3)return true;
    if(n%2==0)return false;
    for(int i=3; i*i<=n; i+=2){
        if(n%i==0)return false;
    }return true;
}
int main(){
        fast();
        int n;cin>>n;
        if(prime_check(n)){cout<<"YES"<<endl;}
        else cout<<"NO"<<endl;
        primesieve(n);
    return 0;
}
