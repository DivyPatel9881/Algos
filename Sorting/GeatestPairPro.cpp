//Find pair with largest product.
#include<iostream>
using namespace std;
struct Pair{
    int a,b;
};
struct Pair FindPairMaxPro(int arr[],int n){
    struct Pair p;
    int l1=0,l2=0;
    int s1=35653,s2=32653;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>l1)
        {
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>l2)
            l2=arr[i];
    }
    for(int i=0;i<n;i++)
    {
        if(s1>arr[i]){
            s2=s1;
            s1=arr[i];
        }
        else if(arr[i]<s2)
            s2=arr[i];
    }
    if(s2*s1<l1*l2)
    {
        p.a=l1;
        p.b=l2;
    }
    else
    {
        p.a=s1;
        p.b=s2;
    }
    return p;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    struct Pair p=FindPairMaxPro(arr,n);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
