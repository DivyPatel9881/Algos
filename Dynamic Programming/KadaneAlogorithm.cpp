//Kadane's Algorithm for maximum sum contigious subarray.
#include<iostream>
using namespace std;
int MaxSum(int arr[],int n){
    int curr=0;
    int glo=0;
    for(int i=0;i<n;i++){
        curr+=arr[i];
        if(curr<0)
            curr=0;
        else if(curr>glo)
            glo=curr;
    }
    return glo;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSum(arr,n)<<endl;
    return 0;
}
