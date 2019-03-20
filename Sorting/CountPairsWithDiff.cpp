//Count all distinct pairs with difference equal to k.
#include<bits/stdc++.h>
using namespace std;
int CountPairs(int arr[],int n,int k){
    sort(arr,arr+n);
    int Count =0;
    int l1=0;
    int l2=0;
    while(l1<n && l2<n){
        int diff=arr[l2]-arr[l1];
        if(diff<k)
            l2++;
        else if(diff==k){
            Count++;
            l1++;
            l2++;
        }
        else
            l1++;
    }
    return Count;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<CountPairs(arr,n,k)<<endl;
    return 0;
}
