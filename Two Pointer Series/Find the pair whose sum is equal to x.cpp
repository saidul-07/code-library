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
    1. Find the pair in array whose sum is equal to x
    2. Find the closet pair from two sorted arrays
    3. Find the pair is array whose sum is closest to x
    4. Find all triplets with zero sum
    5. Find a triplet that sum to a given value
    6. Find a triplet such that sum of two qeuals to third element
    7. Find four elements that sum to a given value
    8. solve problem


               Find the pair whose sum is equal to x
   -------------------------------------------------------

   given an array and x value. Find out pair from array. if possible print yes otherwise no
    */
int val1,val2;
bool solve(vector<int>v,int n,int x){
        int i=0,j=n-1;
        while(i<j){
            int sum=v[i]+v[j];
            if(sum==x){
                val1=v[i];
                val2=v[j];
                return true;
                }
            else if(sum>x)j--;
            else i++;
        }
        return false;
    }
int main() {
    //fast();
    int n,x;cin>>n>>x;
    vector<int>v(n);
    for(int i=0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(solve(v,n,x)){
        cout<<"YES ";
        cout<<val1<<' '<<val2;
    }
    else cout<<"NO"<<endl;

    return 0;
}

