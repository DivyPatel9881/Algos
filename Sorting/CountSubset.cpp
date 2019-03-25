//Count minimum number of subsets which are consecutive.
#include<bits/stdc++.h>
using namespace std;
int CountSubsets(int arr[],int n){
    sort(arr,arr+n);
    int c=1;
    for(int i=1;i<n;i++)
        if(arr[i-1]+1!=arr[i])
            c++;
    return c;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<CountSubsets(arr,n);
    return 0;
}
