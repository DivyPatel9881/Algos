#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
int FindMaxPro(int arr[],int len)
{
    int large1=0, large2=0, small1=MAX, small2=MAX;
    for(int i=0;i<len;i++)
    {
        if(large1<arr[i])
        {
            large2=large1;
            large1=arr[i];
        }
        else if(large1>arr[i])
        {
            if(large2<arr[i])
                large2=arr[i];
        }
        if(small1>arr[i])
        {
            small2=small1;
            small1=arr[i];
        }
        else if(small1<arr[i])
        {
            if(small2>arr[i])
                small2=arr[i];
        }
    }
    return Max(large1*large2,small1*small2);
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FindMaxPro(arr,k)<<endl;
    return 0;
}
