//Number of adjacent swaps to make a array sorted.
#include<iostream>
using namespace std;
int Merge(int arr[],int l,int k,int h){
    int arr1[h-l+1];
    int l1=l;
    int l2=k+1;
    int i=0;
    int sum=0;
    while(l1<=k&&l2<=h){
        if(arr[l1]<arr[l2])
            arr1[i++]=arr[l1++];
        else if(arr[l1]>arr[l2])
        {
            sum+=(k-l1+1);
            arr1[i++]=arr[l2++];
        }
    }
    while(l1<=k)
        arr1[i++]=arr[l1++];
    while(l2<=h)
        arr1[i++]=arr[l2++];
    for(int i=l;i<=h;i++)
        arr[i]=arr1[i-l];
    return sum;
}
int CountAdjSwaps(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        int c1 = CountAdjSwaps(arr,l,k);
        int c2 = CountAdjSwaps(arr,k+1,h);
        int c3 = Merge(arr,l,k,h);
        return c1+c2+c3;
    }
    return 0;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<CountAdjSwaps(arr,0,n-1)<<endl;
    return 0;
}
