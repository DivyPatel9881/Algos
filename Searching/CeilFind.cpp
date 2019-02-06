#include<bits/stdc++.h>
using namespace std;
int CeilFind(int arr[],int l,int h,int k){
    int med=(l+h)/2;
    if(l<h)
    {
        if(arr[med]>k)
            return CeilFind(arr,l,med,k);
        else if(arr[med]<k)
            return CeilFind(arr,med+1,h,k);
        else if(arr[med]==k)
            return k;
    }
    else if(l==h && arr[med]>k)
        return arr[med];
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
    int ceil;
    cout<<"Enter a ceil number : ";
    cin>>ceil;
    cout<<CeilFind(arr,0,k-1,ceil)<<endl;
    return 0;
}
