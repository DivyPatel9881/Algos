//Find whether arithmetic series can be formed using the elements of array.
#include<bits/stdc++.h>
using namespace std;
bool isArithPro(int arr[],int n){
    sort(arr,arr+n);
    int diff=arr[0]-arr[1];
    for(int i=1;i<n-1;i++)
        if(arr[i]-arr[i+1]!=diff)
            return false;
    return true;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<isArithPro(arr,n)<<endl;
    return 0;
}
