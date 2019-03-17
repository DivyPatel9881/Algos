//Binary Search
#include<iostream>
using namespace std;

bool BinarySearch(int arr[],int l,int h,int k)
{
    if(l<=h){
        int k1=(l+h)/2;
        if(arr[k1]==k)
            return true;
        else if(arr[k1]<k)
            return BinarySearch(arr,k1+1,h,k);
        else if(arr[k1]>k)
            return BinarySearch(arr,l,k1-1,k);
    }
    return false;
}
int main()
{
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<BinarySearch(arr,0,n-1,k)<<endl;
    return 0;
}
