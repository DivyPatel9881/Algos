#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void Heapify(int arr[],int len,int k){
    int l = 2*k+1;
    int r = 2*k+2;
    int p=-1;
    if(l<len&&r<len){
        if(arr[l]>arr[k])
            p=l;
        if(arr[r]>arr[k]&&arr[r]>arr[l])
            p=r;
    }
    else if(l<len)
    {
        if(arr[l]>arr[k])
            p=l;
    }
    if(p!=-1)
    {
        Swap(arr[p],arr[k]);
        Heapify(arr,len,p);
    }
}
int Sort(int arr[],int len)
{
    int k=(len-2)/2;
    for(int i=k;i>=0;i--)
        Heapify(arr,len,i);

    for(int i=len-1;i>=0;i--){
        Swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
