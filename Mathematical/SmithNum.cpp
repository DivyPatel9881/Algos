#include<bits/stdc++.h>
using namespace std;
int SumDec(int a){
    int sum=0;
    while(a){
        sum+=(a%10);
        a/=10;
    }
    return sum;
}
int SumPrimeFactors(int a){
    int sum=0;
    int k=a;
    while(a%2==0){
        sum+=2;
        a/=2;
    }
    for(int i=3;i<=ceil(sqrt(a));i+=2){
        while(a%i==0){
            sum+=SumDec(i);
            a/=i;
        }
    }
    if(a!=1)
        sum+=SumDec(a);
    return sum;
}
bool isSmith(int a){
    return bool(SumDec(a)==SumPrimeFactors(a));
}
int main(){
    int k;
    cout<<"Enter a Number : ";
    cin>>k;
    cout<<isSmith(k)<<endl;
    return 0;
}
