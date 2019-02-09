#include<bits/stdc++.h>
using namespace std;
int FindOneApp(int arr[],int l,int h)
{
    int k=(l+h)/2;
    if(l<h)
    {
        if(k%2==0)
        {
            if(k+1<=h && arr[k]==arr[k+1])
                return FindOneApp(arr,k+2,h);
            else if(k-1>=l && arr[k-1]==arr[h])
                return FindOneApp(arr,l,k-2);
            else if(k+1<=h && k-1>=l && arr[k]!=arr[k+1] && arr[k]!=arr[k-1])
                return arr[k];
        }
        else
        {
            if(k+1<=h && arr[k]==arr[k+1])
                return FindOneApp(arr,l,k-1);
            else if(k-1>=l && arr[k-1]==arr[h])
                return FindOneApp(arr,k+1,h);
            else if(k+1<=h && k-1>=l && arr[k]!=arr[k+1] && arr[k]!=arr[k-1])
                return arr[k];
        }
    }
    return arr[l];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FindOneApp(arr,0,k-1)<<endl;
    return 0;
}
