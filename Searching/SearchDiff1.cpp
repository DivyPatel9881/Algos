//Given an array where difference between adjacent elements is 1, write an algorithm to search for an element in the array and return the position of the element (return the first occurrence).
#include<iostream>
using namespace std;
int Abs(int a){
    if(a<0)
        return -a;
    return a;
}
bool SearchDiff1(int arr[],int n,int k){
    int i=0;
    while(i<=n-1)
    {
        if(arr[i]==k)
            return true;
        i+=Abs(arr[i]-k);
    }
    return false;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<SearchDiff1(arr,n,k);
    return 0;
}
