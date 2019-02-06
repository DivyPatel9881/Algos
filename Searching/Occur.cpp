#include<bits/stdc++.h>
using namespace std;
int Search(int arr[],int l,int h,int k)
{
    int mid=(l+h)/2;
    if(l<=h)
    {
        if(arr[mid]<k)
            return Search(arr,mid+1,h,k);
        else if(arr[mid]>k)
            return Search(arr,l,mid-1,k);
        else if(arr[mid]==k)
            return mid;
    }
    return -1;
}
int Occur(int arr[],int len,int k)
{
    int i=-1,j=-1;
    int l=0;
    int h=len-1;
    do{
        int in = Search(arr,l,h,k);
        if(in==-1)
            return 0;
        else if(in-1>=l && arr[in]==arr[in-1])
            h=in-1;
        else if(in-1>=l && arr[in-1]!=arr[in])
        {
            i=in;
            break;
        }
        else if(in-1<l)
        {
            i=in;
            break;
        }
    }while(true);
    do{
        int in = Search(arr,l,h,k);
        if(in+1<=h && arr[in]==arr[in+1])
            l=in+1;
        else if(in+1<=h && arr[in+1]!=arr[in])
        {
            j=in;
            break;
        }
        else if(in+1>h)
        {
            j=in;
            break;
        }
    }while(true);
    return (j-i+1);
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    cout<<Occur(arr,k,n)<<endl;
    return 0;
}
