#include<bits/stdc++.h>
using namespace std;
int FindLast1(int arr[],int l,int h){
    int k=(l+h)/2;
    if(l<=h)
    {
        if(k==h && arr[k]==1)
            return k;
        else if(k+1<=h && arr[k+1]==0 && arr[k]==1)
            return k;
        else if(k+1<=h && arr[k+1]==1 && arr[k]==1)
            return FindLast1(arr,k+1,h);
        else if(arr[k]==0)
            return FindLast1(arr,l,k-1);
        else if(arr[k]==1)
            return FindLast1(arr,k,h);
    }
    return -1;
}
int main()
{
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<1+FindLast1(arr,0,k-1)<<endl;
    return 0;
}
