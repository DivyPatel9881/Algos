//Minimum sum of two numbers formed from the array.
#include<bits/stdc++.h>
using namespace std;
int MaxSum(int arr[],int n){
    sort(arr,arr+n);
    int c=0;
    int res1=0;
    int res2=0;
    for(int i=n-1;i>=0;i-=2)
        res1+=arr[i]*ceil(pow(10,c++));
    c=0;
    for(int i=n-2;i>=0;i-=2)
        res2+=arr[i]*ceil(pow(10,c++));
    cout<<res1<<" "<<res2<<endl;
    return res1+res2;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSum(arr,n)<<endl;
    return 0;
}
