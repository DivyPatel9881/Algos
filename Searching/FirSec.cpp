#include<bits/stdc++.h>
using namespace std;

struct Two{
    int arr[2];
} ;
int min(int a,int b)
{
    return a<b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
struct Two FirSec(int arr[],int len)
{
    int k=min(arr[0],arr[1]);
    int j=max(arr[0],arr[1]);
    for(int i=2;i<len;i++)
    {
        if(arr[i]<k)
            k=arr[i];
        else if(arr[i]<j)
            j=arr[i];
    }
    struct Two a;
    a.arr[0]=k;
    a.arr[1]=j;
    return a;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Two a=FirSec(arr,k);
    cout<<a.arr[0]<<" "<<a.arr[1]<<endl;
    return 0;
}
