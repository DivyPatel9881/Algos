//Find a minimum n whose Factorial is divisible by a given number x;
#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int MinNumDiv(int n){
    int i;
    for(i=1;i<n;i++){
        int k = GCD(i,n);
        n/=k;
        if(n==1)
            return i;
    }
    return i;
}
int main(){
    int x;
    cin>>x;
    cout<<MinNumDiv(x)<<endl;
    return 0;
}
