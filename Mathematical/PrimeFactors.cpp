#include<bits/stdc++.h>
using namespace std;
void PrimeFactors(int a){
    int k=2;
    while(a%k==0){
        cout<<k<<" ";
        a/=k;
    }
    k++;
    for(;k<=ceil(sqrt(a));k+=2){
        while(a%k==0)
        {
            cout<<k<<" ";
            a/=k;
        }
    }
    if(a!=1)
        cout<<a<<" ";
    cout<<endl;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    PrimeFactors(a);
    return 0;
}
