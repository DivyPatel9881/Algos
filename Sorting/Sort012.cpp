#include<bits/stdc++.h>
using namespace std;
void Sort012(int arr[],int k){
    int arr1[3];
    for(int i=0;i<3;i++)
        arr1[i]=0;
    for(int i=0;i<k;i++)
        arr1[arr[i]]++;
    int j=0;
    for(int i=0;i<arr1[0];i++)
        arr[j++]=0;
    for(int i=0;i<arr1[1];i++)
        arr[j++]=1;
    for(int i=0;i<arr1[2];i++)
        arr[j++]=2;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort012(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
