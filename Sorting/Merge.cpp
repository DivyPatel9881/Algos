#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int len){
    int k;
    for(int i=0;i<len-1;i++)
        if(arr[i]>arr[i+1])
            k=i+1;
    int l1=0;
    int l2=k;
    int arr1[100];
    int in=0;
    while(l1<=k-1 && l2<=len-1){
        if(arr[l1]<=arr[l2])
            arr1[in++] = arr[l1++];
        else if(arr[l1]>arr[l2])
            arr1[in++] = arr[l2++];
    }
    if(l1>k-1){
        while(l2<=len-1)
            arr1[in++]=arr[l2++];
    }
    if(l2>len-1){
        while(l1<=k-1)
            arr1[in++]=arr[l1++];
    }
    for(int i=0;i<len;i++)
        arr[i] = arr1[i];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
