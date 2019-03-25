//Maximum product of a triplet.
#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxTripletProduct(int arr[],int n){
    sort(arr,arr+n);
    return Max(arr[0]*arr[1]*arr[n-1],arr[n-1]*arr[n-2]*arr[n-3]);
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxTripletProduct(arr,n);
    return 0;
}
