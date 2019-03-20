//Find the number occuring odd number of times.
#include<iostream>
using namespace std;
int OddAppearingNum(int arr[],int n){
    int res = arr[0];
    for(int i=1;i<n;i++)
        res^=arr[i];
    return res;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<OddAppearingNum(arr,n)<<endl;
    return 0;
}
