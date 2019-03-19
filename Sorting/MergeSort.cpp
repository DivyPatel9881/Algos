//Merge Sort.
#include<iostream>
using namespace std;
void Merge(int arr[],int l,int k,int h){
    int arr1[h-l+1];
    int l1=l,l2=k+1;
    int i=0;
    while(l1<=k && l2<=h){
        if(arr[l1]<arr[l2])
            arr1[i++]=arr[l1++];
        else if(arr[l1]>arr[l2])
            arr1[i++]=arr[l2++];
    }
    while(l1<=k)
        arr1[i++]=arr[l1++];
    while(l2<=h)
        arr1[i++]=arr[l2++];
    for(int i=l;i<=h;i++)
        arr[i]=arr1[i-l];
}
void MergeSort(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        MergeSort(arr,l,k);
        MergeSort(arr,k+1,h);
        Merge(arr,l,k,h);
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    MergeSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
