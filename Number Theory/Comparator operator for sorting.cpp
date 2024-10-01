#include<bits/stdc++.h>
using namespace std;
#define sc second
#define fi first
bool com(pair<int,int>a, pair<int,int>b){
    if(a.first!=b.first){  // sort increasing order base fast element
        if(a.fi>b.fi) return false;
        else return true;
    }
    else {
        if(a.sc<b.sc) return false; // sort decreasing order base second element
        else return true;
    }
}
int main(){
    vector<pair<int,int>>v;
    int n; cin >> n;
    for(int i =1; i<=n; i++){
        int x, y; 
        cin >> x >> y;
        v.push_back(make_pair(x,y));
    }
    sort(v.begin(),v.end(),com);
    for(auto u: v)
        cout<<u.first<<' '<<u.second<<endl;
    
    return 0;
}