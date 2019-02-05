#include<iostream>
using namespace std;
int Find(int arr[],int len)
{
    int sum=0;
    for(int i=0;i<len;i++)
        sum+=arr[i];
    return (((len+1)*(len+2))/2)-sum;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<Find(arr,k)<<endl;
    return 0;
}
