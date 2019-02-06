#include<bits/stdc++.h>
using namespace std;
int Find(int arr[],int l,int h)
{
    int k=(l+h)/2;
    if(l<=h)
    {
        if(arr[k]==k)
            return k;
        else if(arr[k]>k)
            return Find(arr,l,k-1);
        else if(arr[k]<k)
            return Find(arr,k+1,h);
    }
    return -1;
}
int main()
{
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<Find(arr,0,k-1)<<endl;
    return 0;
}
