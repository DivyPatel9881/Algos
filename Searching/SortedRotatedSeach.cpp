//An element in a sorted array can be found in O(log n) time via binary search. But suppose we rotate an ascending order sorted array at some pivot unknown to you beforehand. So for instance, 1 2 3 4 5 might become 3 4 5 1 2. Devise a way to find an element in the rotated array in O(log n) time.
#include <iostream>
using namespace std;

int FindPivot(int arr[],int l,int h)
{
    if(l<h){
        int k=(l+h)/2;
        if(arr[l]==arr[k])
            return k+1;
        else if(arr[k]>arr[l])
            return FindPivot(arr,k,h);
        else if(arr[k]<arr[l])
            return FindPivot(arr,l,k-1);
    }
}
bool BinarySearch(int arr[],int l,int h,int k)
{
    if(l<=h){
        int k1=(l+h)/2;
        if(arr[k1]<k)
            return BinarySearch(arr,k1+1,h,k);
        else if(arr[k1]>k)
            return BinarySearch(arr,l,k1-1,k);
        else if(arr[k1]==k)
            return true;
    }
    return false;
}
bool SortedRotatedSearch(int arr[],int n,int k)
{
    if(arr[0]<arr[n-1])
        return BinarySearch(arr,0,n-1,k);
    else{
        int p = FindPivot(arr,0,n-1);
        if(k<=arr[n-1])
            return BinarySearch(arr,p+1,n-1,k);
        else
            return BinarySearch(arr,0,p,k);
    }
}
int main(){
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    cout<<SortedRotatedSearch(arr,k,n)<<endl;
    return 0;
}
