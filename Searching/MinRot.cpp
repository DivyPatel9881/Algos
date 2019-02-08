#include<bits/stdc++.h>
using namespace std;
int Find(int arr[],int l,int h)
{
    if(arr[l]<arr[h])
        return arr[l];
    if(l==h)
        return arr[l];
    int k=(l+h)/2;
    if(l<h)
    {
        if(k-1>=l && k+1<=h && arr[k-1]>arr[k] && arr[k+1]>arr[k])
            return arr[k];
        else if(arr[l]<=arr[k])
            return Find(arr,k+1,h);
        else if(arr[l]>arr[k])
            return Find(arr,l,k-1);
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<Find(arr,0,k-1)<<endl;
    return 0;
}
