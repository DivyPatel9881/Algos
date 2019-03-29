//Maximum sum of subsequence in which no elements are consecutive.
#include<iostream>
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxSumSub(int arr[],int n){
    int prev_ex=0;
    int prev_in=0;
    int curr_in=0;
    int curr_ex=0;
    for(int i=0;i<n;i++){
        curr_ex=Max(prev_ex,prev_in);
        curr_in=arr[i]+prev_ex;
        prev_in=curr_in;
        prev_ex=curr_ex;
    }
    return Max(curr_ex,curr_in);
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSumSub(arr,n)<<endl;
    return 0;
}
