#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void WaveSort(int arr[],int len){
    sort(arr,arr+len);
    for(int i=0;i<=len-2;i+=2)
        Swap(arr[i],arr[i+1]);
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    WaveSort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
