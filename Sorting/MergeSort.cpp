#include<bits/stdc++.h>
using namespace std;
int Merge(int arr[],int l,int k,int h)
{
    int extra[100];
    int k1=0;
    int in1 = l;
    int in2 = k+1;
    while(in1<=k&&in2<=h){
        if(arr[in1]<=arr[in2])
            extra[k1++]=arr[in1++];
        else
            extra[k1++]=arr[in2++];
    }
    if(in1>k){
        while(in2<=h)
            extra[k1++] = arr[in2++];
    }
    else if(in2>h){
        while(in1<=k)
            extra[k1++] = arr[in1++];
    }
    for(int i=0;i<k1;i++)
        arr[l+i]=extra[i];
}
int Sort(int arr[],int l,int h){
    int k=(l+h)/2;
    if(l<h)
    {
        Sort(arr,l,k);
        Sort(arr,k+1,h);
        Merge(arr,l,k,h);
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,0,k-1);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
