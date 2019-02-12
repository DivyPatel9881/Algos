#include<bits/stdc++.h>
using namespace std;
int CountSubset(int arr[],int len){
    sort(arr,arr+len);
    int Count=0;
    int flag=0;
    for(int i=0;i<len-1;i++)
    {
        if(arr[i]+1==arr[i+1]&&flag==0)
        {
            Count++;
            flag=1;
        }
        else if(arr[i]+1!=arr[i+1])
            flag=0;
    }
    return Count;
}
int main(){
    int arr[100];
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<CountSubset(arr,k)<<endl;
    return 0;
}
