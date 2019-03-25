//Chocolate Distribution Problem.
#include<bits/stdc++.h>
using namespace std;
int MinDiff(int arr[],int n,int k){
    sort(arr,arr+n);
    int small=332337;
    for(int i=0;i<=n-k;i++)
    {
        int diff=arr[i+k-1]-arr[i];
        if(small>diff)
            small=diff;
    }
    return small;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<MinDiff(arr,n,k)<<endl;
    return 0;
}
