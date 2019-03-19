//Given an array, find an element before which all elements are smaller than it, and after which all are greater than it. Return index of the element if there is such an element, otherwise return -1.
#include<iostream>
using namespace std;
int FindCrossOver(int arr[],int n){
    int arr1[n];
    int arr2[n];
    int l=arr[0];
    int h=arr[n-1];
    arr1[0]=-1;
    arr2[n-1]=728772;
    for(int i=1;i<n;i++){
        arr1[i]=l;
        if(l<arr[i])
            l=arr[i];
    }
    for(int i=n-2;i>=0;i--){
        arr2[i]=h;
        if(h>arr[i])
            h=arr[i];
    }
    for(int i=0;i<n;i++){
        if(arr1[i]<arr[i] && arr[i]<arr2[i])
            return arr[i];
    }
    return -1;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<FindCrossOver(arr,n)<<endl;
    return 0;
}
