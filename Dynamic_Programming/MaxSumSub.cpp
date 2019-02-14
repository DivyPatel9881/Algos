#include<bits/stdc++.h>
using namespace std;
int MaxSumSub(int arr[],int l){
    int sum_now=0,max_sum=0;
    for(int i=0;i<l;i++){
        sum_now+=arr[i];
        if(sum_now<0)
            sum_now=0;
        if(sum_now>max_sum)
            max_sum=sum_now;
    }
    return max_sum;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<MaxSumSub(arr,k)<<endl;
    return 0;
}
