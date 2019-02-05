#include<bits/stdc++.h>

using namespace std;

int Pivot(int arr[],int l,int h)
{
    int k=(l+h)/2;
    if(l<=h)
    {
        if(arr[k]<arr[k-1]&&arr[k]<arr[k+1])
            return k;
        else if(arr[l]<arr[k])
            return Pivot(arr,k,h);
        else if(arr[l]>arr[k])
            return Pivot(arr,l,k);
    }
    return -1;
}
bool BinSearch(int arr[],int l,int h,int a)
{
    int k=(l+h)/2;
    if(l<=k)
    {
        if(arr[k]<a)
            return BinSearch(arr,k+1,h,a);
        else if(arr[k]>a)
            return BinSearch(arr,l,k-1,a);
        else if(arr[k]==a)
            return true;
    }
    return false;
}
bool Search(int arr[],int len,int a)
{
    int p = Pivot(arr,0,len-1);
    if(p==-1)
        return BinSearch(arr,0,len-1,a);
    else{
        if(arr[len-1]>=a)
            BinSearch(arr,p,len-1,a);
        else
            BinSearch(arr,0,p-1,a);
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cout<<"Enter a Number which you want to find : ";
    cin>>n;
    cout<<Search(arr,k,n)<<endl;
    return 0;
}
