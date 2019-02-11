#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int MinDiff(int arr[],int n)
{
    sort(arr,arr+n);
    int Min = MAX;
    for(int i=0;i<n-1;i++)
    {
        int diff = arr[i+1]-arr[i];
        if(Min>diff)
            Min = diff;
    }
    return Min;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<MinDiff(arr,k)<<endl;
    return 0;
}
