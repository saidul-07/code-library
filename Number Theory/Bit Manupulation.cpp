#include<bits/stdc++.h>
using namespace std;
#include <bitset>
///Check if a bit is set
bool is_set(unsigned int number, int x) {
    return (number >> x) & 1;
}

///Check if the number is divisible by a power of 2^k
bool isDivisibleBypowerof2(int n,int k){
    int powerof2=(1<<k);
    return (n&(powerof2-1)==0);
}
///Check if an integer is a power of 2
bool ispoweroftwo(int n){
    return n&& !(n&(n-1));
}

///Brian Kernighan's algorithm (Count the number os set bits)
int countsetbits(int n){
    int cnt=0;
    while(n){
        n=n&(n-1);  ///Clear the right-most set bit: n&(n-1)
        cnt++;
    }
    return cnt;
}

int main()
{
    cout<<is_set(21,2)<<endl;// Check if a bit is set  0 index base count right to lest
    
    cout<<isDivisibleBypowerof2(8,3)<<endl;//////Check if the number is divisible by a power of 2^k
    
    cout<<ispoweroftwo(32)<<endl; //Check if an integer is a power of 2
    
    cout<<countsetbits(52)<<endl;///00110100  Count the number os set bits
    
    //cout<<has_single_bit(16);
    cout<<__builtin_popcount(10)<<endl;/// returns the number of set bits
    
    cout<<__builtin_ffs(12)<<endl;/// finds the index of the first (most right) set bit(1100)

  //p  cout<<__builtin_clz(10)<<endl;/// the count of leading zeros
  //p  cout<<__builtin_ctz(51)<<endl;/// the count of trailing zeros
    cout<<__builtin_parity(11)<<endl;


//set the x-th bit in the number n 0 index base count right to lest
    ///cout<<n|(1<<x)<<endl;

//flips the x-th bit in the number n 0 index base count right to lest
    ///cout<<n^(1<<x)<<endl;
//clear the x-th bit in the number n 0 index base count right to lest
    ///cout<<n&~(1<<x)<<endl;
    return 0;
}

