#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;

int FindInTwo(int arr[],int len){
    int arr1[100];
    int arr2[100];
    int small=MAX,large=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]>large)
            large=arr[i];
        arr1[i]=large;
    }
    for(int i=len-1;i>=0;i--)
    {
        if(arr[i]<small)
            small=arr[i];
        arr2[i]=small;
    }
    for(int i=0;i<len;i++)
        if(arr1[i]==arr2[i])
            return i;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FindInTwo(arr,k)<<endl;
    return 0;
}
