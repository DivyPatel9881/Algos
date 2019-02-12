#include<bits/stdc++.h>
using namespace std;
bool isArithPro(int arr[],int k){
    sort(arr,arr+k);
    int diff = arr[1]-arr[0];
    for(int i=1;i<k-1;i++)
        if(diff != arr[i+1]-arr[i])
            return false;
    return true;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<isArithPro(arr,k)<<endl;
    return 0;
}
