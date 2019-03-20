//Count inversions in a array.
#include<iostream>
using namespace std;
int Merge(int arr[],int l,int k,int h){
    int arr1[h-l+1];
    int i=0;
    int l1=l;
    int l2=k+1;
    int inv=0;
    while(l1<=k && l2<=h){
        if(arr[l1]<arr[l2])
            arr1[i++]=arr[l1++];
        else if(arr[l1]>arr[l2]){
            inv+=k-l1+1;
            arr1[i++]=arr[l2++];
        }
    }
    while(l1<=k)
        arr1[i++]=arr[l1++];
    while(l2<=h)
        arr1[i++]=arr[l2++];
    for(int i=l;i<=h;i++)
        arr[i]=arr1[i-l];
    return inv;
}
int MergeSort(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        int i1 = MergeSort(arr,l,k);
        int i2 = MergeSort(arr,k+1,h);
        int i3 = Merge(arr,l,k,h);
        return i1+i2+i3;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MergeSort(arr,0,n-1)<<endl;
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
