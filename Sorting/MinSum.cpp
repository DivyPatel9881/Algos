//Minimize the sum of pairwise product of elements of array.
#include<bits/stdc++.h>
using namespace std;
int MinSum(int arr1[],int arr2[],int n){
    sort(arr1,arr1+n);
    sort(arr2,arr2+n);
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=(arr1[i]*arr2[n-i-1]);
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr1[100];
    int arr2[100];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    cout<<MinSum(arr1,arr2,n)<<endl;
    return 0;
}