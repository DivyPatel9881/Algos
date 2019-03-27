//Sort an array if two halves of array is sorted.
#include<iostream>
using namespace std;
void SortTwoHalves(int arr[],int n){
    int l=n-1;
    for(int i=0;i<n-1;i++)
        if(arr[i]>arr[i+1])
        {
            l=i;
            break;
        }
    int arr1[n];
    int i=0;
    int l1=0;
    int l2=l+1;
    while(l1<=l&&l2<=n-1){
        if(arr[l1]<arr[l2])
            arr1[i++]=arr[l1++];
        else if(arr[l1]>arr[l2])
            arr1[i++]=arr[l2++];
    }
    while(l1<=l)
        arr1[i++]=arr[l1++];
    while(l2<=n-1)
        arr1[i++]=arr[l2++];
    for(int i=0;i<n;i++)
        arr[i]=arr1[i];
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    SortTwoHalves(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
