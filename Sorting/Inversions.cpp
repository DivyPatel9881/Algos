#include<bits/stdc++.h>
using namespace std;
int Merge(int arr[],int l,int k,int h)
{
    int len=h-l+1;
    int arr1[len];
    int in=0;
    int l1=l,l2=k+1;
    int sum=0;
    while(l1<=k && l2<=h)
    {
        if(arr[l1]<=arr[l2])
            arr1[in++]=arr[l1++];
        else if(arr[l1]>arr[l2])
        {
            arr1[in++]=arr[l2++];
            sum+=(k-l1+1);
        }
    }
    if(l1>k)
        while(l2<=h)
            arr1[in++]=arr[l2++];
    if(l2>h)
        while(l1<=k)
            arr1[in++]=arr[l1++];
    for(int i=l;i<=h;i++)
        arr[i] = arr1[i-l];
    return sum;
}
int MergeSort(int arr[],int l,int h)
{
    int k=(l+h)/2;
    int n1=0,n2=0,n3=0;
    if(l<h)
    {
        n1 = MergeSort(arr,0,k);
        n2 = MergeSort(arr,k+1,h);
        n3 = Merge(arr,0,k,h);
    }
    return n1+n2+n3;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int inv = MergeSort(arr,0,k-1);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl<<"Inv : "<<inv<<endl;
    return 0;
}
