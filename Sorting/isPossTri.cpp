//Possible triangle formation.
#include<bits/stdc++.h>
using namespace std;
bool isPossTri(int arr[],int n){
    sort(arr,arr+n);
    for(int i=0;i<n-3;i++)
        if(arr[i]+arr[i+1]>arr[i+2])
            return true;
    return false;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<isPossTri(arr,n)<<endl;
    return 0;
}
