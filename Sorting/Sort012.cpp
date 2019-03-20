//Sort array of 0s 1s and 2s.
#include<iostream>
using namespace std;
void Sort(int arr[],int n){
    int arr1[3];
    for(int i=0;i<3;i++)
        arr1[i]=0;
    for(int i=0;i<n;i++)
        arr1[arr[i]]++;
    for(int i=0;i<arr1[0];i++)
        arr[i]=0;
    for(int i=arr1[0];i<n-arr1[2];i++)
        arr[i]=1;
    for(int i=n-arr1[2];i<n;i++)
        arr[i]=2;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    Sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
