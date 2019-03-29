//Coin Changing problem.
#include<bits/stdc++.h>
using namespace std;
map<int,int> MaxC;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxCoinChange(int n){
    int k=MaxC[n];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            MaxC[0]=0;
            return 0;
        }
        else{
            int k1 = Max(n/2,MaxCoinChange(n/2));
            int k2 = Max(n/3,MaxCoinChange(n/3));
            int k3 = Max(n/4,MaxCoinChange(n/4));
            return k1+k2+k3;
        }
    }
}
int MaxCoins(int n){
    return Max(n,MaxCoinChange(n));
}
int main(){
    int n;
    cin>>n;
    cout<<MaxCoins(n)<<endl;
    return 0;
}
