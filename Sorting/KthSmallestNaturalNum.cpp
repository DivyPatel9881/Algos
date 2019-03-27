//Find Kth smallest number in Natural numbers with removing certain numbers.
#include<bits/stdc++.h>
using namespace std;
int KthSmallest(int arr[],int n,int k){
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i]<=k)
            k++;
        else
            return k;
    }
    return k;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<KthSmallest(arr,n,k)<<endl;
    return 0;
}
