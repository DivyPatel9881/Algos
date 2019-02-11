#include<bits/stdc++.h>
using namespace std;
int Sort(int arr[],int len){
    int *arr1= new int [len+1];
    for(int i=0;i<len+1;i++)
        arr1[i]=0;
    for(int i=0;i<len;i++)
        arr1[arr[i]]++;
    int *arr2= new int[len+1];
    for(int i=0;i<=len;i++)
        arr2[i]=0;
    for(int i=1;i<=len;i++)
        arr2[i] = arr1[i] + arr2[i-1];
    for(int i=1;i<=len;i++)
        for(int j = arr2[i]-1; j>=arr2[i]-arr1[i];j--)
            arr[j]=i;
    return 0;
}
int main()
{
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
