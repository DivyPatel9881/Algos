//To find whether a given array is a subset of a other array.
#include<bits/stdc++.h>
using namespace std;
bool Search(int arr[],int l,int h,int k){
    if(l<=h){
        int k1=(l+h)/2;
        if(arr[k1]==k)
            return true;
        else if(arr[k1]<k)
            return Search(arr,k1+1,h,k);
        else if(arr[k1]>k)
            return Search(arr,l,k1-1,k);
    }
    return false;
}
bool isSubset(int arr1[],int n1,int arr2[],int n2){
    sort(arr1,arr1+n1);
    for(int i=0;i<n2;i++)
    {
        if(!Search(arr1,0,n1-1,arr2[i]))
            return false;
    }
    return true;
}
int main(){
    int n1,n2;
    int arr1[100];
    int arr2[100];
    cin>>n1;
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    cout<<isSubset(arr1,n1,arr2,n2)<<endl;
    return 0;
}
