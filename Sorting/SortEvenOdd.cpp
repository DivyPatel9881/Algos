#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int len){
    int l1=0,l2=0;
    int arr1[100],arr2[100];
    for(int i=0;i<len;i++)
    {
        if(i%2==0)
            arr1[l1++]=arr[i];
        else
            arr2[l2++]=arr[i];
    }
    sort(arr1,arr1+l1);
    sort(arr2,arr2+l2);
    for(int i=0;i<l1;i++)
            arr[i]=arr1[i];
    for(int i=l2-1;i>=0;i--)
            arr[l1-i+l2-1]=arr2[i];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<endl;
    return 0;
}
