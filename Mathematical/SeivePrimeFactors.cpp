#include<bits/stdc++.h>
using namespace std;
map <int,int> spf;
void Seive(int a){
    int *arr=new int [a-1];
    for(int i=0;i<a-1;i++)
        arr[i] = i+2;
    int in=0;
    while(in<a-1){
        int k=arr[in];
        if(k!=0){
            spf[k]=k;
            for(int i=in+k;i<a-1;i+=k)
            {
                spf[arr[i]]=k;
                arr[i] = 0;
            }
        }
        in++;
    }
}
void PrimeFactors(int a){
    Seive(a);
    while(a!=1){
        int k = spf[a];
        cout<<k<<" ";
        a/=k;
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    PrimeFactors(k);
    return 0;
}
