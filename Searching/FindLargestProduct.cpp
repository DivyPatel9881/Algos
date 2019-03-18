//Find maximum product in a array of integers.
#include<iostream>
using namespace std;
int MaxProduct(int arr[],int k){
    int l1=0,l2=0,s1=7287879,s2=973783;
    for(int i=0;i<k;i++){
        if(arr[i]>l1){
            l2=l1;
            l1=arr[i];
        }
        else{
            if(arr[i]>l2)
                l2=arr[i];
        }
        if(arr[i]<s1){
            s2=s1;
            s1=arr[i];
        }
        else{
            if(arr[i]<s2)
                s2=arr[i];
        }
    }
    int p1=s1*s2;
    int p2=l1*l2;
    return p1>p2?p1:p2;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxProduct(arr,n)<<endl;
    return 0;
}
