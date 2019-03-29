//maximum subsequence sum such that no three are consecutive.
#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxSumSub3(int arr[],int n){
    int curr1_in=0;
    int curr2_in=0;
    int curr_ex=0;
    int prev1_in=0;
    int prev2_in=0;
    int prev_ex=0;
    for(int i=0;i<n;i++)
    {
        curr_ex = Max(prev_ex,Max(prev1_in,prev2_in));
        curr1_in = arr[i] + prev_ex;
        curr2_in = arr[i] + prev1_in;
        prev_ex=curr_ex;
        prev1_in = curr1_in;
        prev2_in = curr2_in;
    }
    return Max(curr_ex,Max(curr1_in,curr2_in));
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSumSub3(arr,n)<<endl;
    return 0;
}
