#include<bits/stdc++.h>
using namespace std;
int Sum2Array(int arr1[],int arr2[],int l){
    sort(arr1,arr1+l);
    sort(arr2,arr2+l);
    int sum=0;
    for(int i=0;i<l;i++)
        sum += arr1[i] * arr2[l-1-i];
    return sum;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr1[100],arr2[100];
    for(int i=0;i<k;i++)
        cin>>arr1[i];
    for(int i=0;i<k;i++)
        cin>>arr2[i];
    cout<<Sum2Array(arr1,arr2,k)<<endl;
    return 0;
}
