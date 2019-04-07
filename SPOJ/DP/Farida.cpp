//Princess Farida
#include<bits/stdc++.h>
#define L long long
using namespace std;
L Max(L a,L b){
    return a>b?a:b;
}
L MaxCoins(int arr[],int n){
    long long arr1[100001];
    arr1[0]=0;
    for(int i=1;i<=n;i++){
        if(i==1)
            arr1[i]=arr[i-1];
        else
            arr1[i] = Max(arr[i-1]+arr1[i-2],arr1[i-1]);
    }
    return arr1[n];
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n;
        cin>>n;
        int arr[100000];
        for(int j=0;j<n;j++)
            cin>>arr[j];
        cout<<"Case "<<i+1<<": "<<MaxCoins(arr,n)<<endl;
    }
    return 0;
}
