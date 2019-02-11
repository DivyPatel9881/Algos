#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
struct Pair{
    int l,h;
};
struct Pair Bound(int arr[],int k){
    int l,h;
    for(int i=0;i<k-1;i++)
        if(arr[i]>arr[i+1])
        {
            l=i+1;
            break;
        }
    for(int i=k-1;i>0;i--)
        if(arr[i-1]>arr[i])
        {
            h=i-1;
            break;
        }
    cout<<l<<" "<<h<<endl;
    int Max=0,Min=MAX;
    int l1,h1;
    if(l<h)
    {
        l1=l;
        h1=h;
    }
    else
    {
        l1=h;
        h1=l;
    }
    for(int i=l1;i<=h1;i++)
    {
        if(arr[i]>Max)
            Max=arr[i];
        if(arr[i]<Min)
            Min=arr[i];
    }
    cout<<Min<<" "<<Max<<endl;
    for(int i=0;i<=l-1;i++)
        if(arr[i]>Min)
        {
            l=i;
            break;
        }
    for(int i=k-1;i>=h+1;i--)
        if(arr[i]<Max)
        {
            h=i;
            break;
        }
    struct Pair p ;
    p.l=l;
    p.h=h;
    return p;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Pair p = Bound(arr,k);
    cout<<p.l<<" "<<p.h<<endl;
    return 0;
}
