#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int DiffChoco(int arr[],int k,int m){
    sort(arr,arr+k);
    int small= MAX;
    int l;
    for(int i=m-1;i<k;i+=m){
        int diff = arr[i]-arr[i-m+1];
        if(diff<small){
            l=i-m+1;
            small = diff;
        }
    }
    return small;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<"Enter a number : ";
    int j;
    cin>>j;
    cout<<DiffChoco(arr,k,j)<<endl;
    return 0;
}
