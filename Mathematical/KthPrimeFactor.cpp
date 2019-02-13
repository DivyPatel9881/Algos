#include<bits/stdc++.h>
using namespace std;
int KthPrimeFactor(int a,int k){
    int l=a;
    int in=0;
    while(a%2==0)
    {
        in++;
        if(in==k)
            return 2;
        a/=2;
    }
    for(int i=3;i<=ceil(sqrt(l));i+=2){
        while(a%i==0)
        {
            in++;
            if(in==k)
                return i;
            a/=i;
        }
    }
    if(a!=1)
    {
        in++;
        if(in==k)
            return a;
    }
    return -1;
}
int main(){
    int a,k;
    cout<<"Enter numbers : ";
    cin>>a>>k;
    cout<<KthPrimeFactor(a,k)<<endl;
    return 0;
}
