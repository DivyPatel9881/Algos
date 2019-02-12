#include<bits/stdc++.h>
using namespace std;
int Abs(int i){
    if(i<0)
        return -i;
    return i;
}
int SumAbsDiff(int arr1[],int arr2[],int k){
    sort(arr1,arr1+k);
    sort(arr2,arr2+k);
    int sum=0;
    for(int i=0;i<k;i++)
        sum += Abs(arr1[i]-arr2[i]);
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
    cout<<SumAbsDiff(arr1,arr2,k)<<endl;
    return 0;
}

