#include<bits/stdc++.h>
using namespace std;

///       Prime Factorization using vector     ///////
vector<pair<int,int>> primefactor(int n){
    vector<pair<int,int>>v;
    for(int i=2; i<=n; i++){
    if(n%i==0){
    int cnt=0;
    while(n%i==0){
        cnt++;
        n/=i;
            }
        v.push_back({i,cnt});
        }
    }
    if(n>1)v.push_back({n,1});
    return v;
}
///       Prime Factorization using map     ///////

map<int,int>mp; /// global declaration
void primefactormp(int n){
    for(int i=2; i<=n; i++){
    if(n%i==0){
    int cnt=0;
    while(n%i==0){
        cnt++;
        n/=i;
            }
       mp[i]=cnt;
        }
    }
    if(n>1)mp[n]=1;
}
int main() {
    int n;cin>>n;
//    vector<pair<int,int>>ans=primefactor(n);
//    for(int i=0; i<ans.size(); i++)
//        cout<<ans[i].first<<'^'<<ans[i].second<<endl;

    primefactormp(n);  ///map calling
    for(auto [index,key]: mp)
        cout<<index<<'^'<<key<<endl;
    return 0;
}

