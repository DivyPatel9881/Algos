#include<bits/stdc++.h>
using namespace std;
int MinSum(int arr[],int k){
    sort(arr,arr+k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int sum1=0;
    int sum2=0;
    int j=0;
    for(int i=k-1;i>=0;i-=2)
        sum1+=ceil(float(arr[i])*float(pow(10,j++)));
    j=0;
    for(int i=k-2;i>=0;i-=2)
        sum2+=ceil(float(arr[i])*float(pow(10,j++)));
    cout<<sum1<<" "<<sum2<<endl;
    return sum1+sum2;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<MinSum(arr,k)<<endl;
    return 0;
}
