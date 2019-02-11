#include<bits/stdc++.h>
using namespace std;
bool Search(int arr[],int l,int h,int a){
    int k=(l+h)/2;
    if(l<=h)
    {
        if(arr[k]==a)
            return true;
        else if(arr[k]>a)
            return Search(arr,0,k-1,a);
        else if(arr[k]<a)
            return Search(arr,k+1,h,a);
    }
    return false;
}
bool isSubset(int arr1[],int l1,int arr2[],int l2){
    sort(arr1,arr1+l1);
    for(int i=0;i<l2;i++)
        if(!Search(arr1,0,l1-1,arr2[i]))
            return false;
    return true;
}
int main(){
    int k1,k2;
    cout<<"Enter the numbers : ";
    cin>>k1>>k2;
    int arr1[100],arr2[100];
    for(int i=0;i<k1;i++)
        cin>>arr1[i];
    for(int i=0;i<k2;i++)
        cin>>arr2[i];
    cout<<isSubset(arr1,k1,arr2,k2)<<endl;
    return 0;
}
