//Bytelandian gold coins.
#include<bits/stdc++.h>
using namespace std;
map<int,int> MaxP;
unsigned long Max(unsigned long a,unsigned long b){
    return a>b?a:b;
}
unsigned long ByteLandian(unsigned long n){
    unsigned long k=MaxP[n];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            MaxP[n]=0;
            return 0;
        }
        else{
            MaxP[n] = Max(n,ByteLandian(n/2)+ByteLandian(n/3)+ByteLandian(n/4));
            return MaxP[n];
        }
    }
}
int main(){
    for(int i=0;i<10;i++)
    {
        int n;
        cin>>n;
        cout<<ByteLandian(long(n))<<endl;
    }
    return 0;
}
