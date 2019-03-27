//Minimum sum of absolute difference of pairs of two arrays.
#include<bits/stdc++.h>
using namespace std;
int Abs(int a){
    if(a<0)
        return -a;
    return a;
}
int MinSumPairs(int arr1[],int arr2[],int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=Abs(arr1[i]-arr2[i]);
    return sum;
}
int main(){
    int arr1[100];
    int arr2[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    cout<<MinSumPairs(arr1,arr2,n)<<endl;
    return 0;
}
