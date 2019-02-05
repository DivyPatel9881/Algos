#include<bits/stdc++.h>

using namespace std;

bool Search(int arr[],int l,int h,int a)
{
    int k=(l+h)/2;
    cout<<l<<" "<<h<<endl;
    if(l<=h)
    {
        cout<<"Entered"<<endl;
        if(arr[k]<a)
            return Search(arr,k+1,h,a);
        else if(arr[k]>a)
            return Search(arr,l,k-1,a);
        else if(arr[k]==a)
            return true;
    }
    return false;
}
int main(){
    int k,n;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter a number which you want to search : ";
    cin>>k;
    cout<<Search(arr,0,n-1,k)<<endl;
    return 0;
}
