//Maximum sum of pairs with specific difference.
#include<bits/stdc++.h>
using namespace std;
int MaxSumPairs(int arr[],int n,int k){
    sort(arr,arr+n);
    int i=n-1;
    int sum=0;
    while(i>0){
        if(arr[i]-arr[i-1]<k)
        {
            sum+=(arr[i]+arr[i-1]);
            i-=2;
        }
        else
            i-=1;
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<MaxSumPairs(arr,n,k)<<endl;
    return 0;
}
