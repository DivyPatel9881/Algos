#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int LCM(int a,int b){
    return (a*b/GCD(a,b));
}
int MinNumDivByN(int a){
    int k=1;
    for(int i=2;i<=a;i++){
        k=LCM(k,i);
    }
    return k;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<MinNumDivByN(k)<<endl;
    return 0;
}
