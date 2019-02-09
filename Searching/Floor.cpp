#include<bits/stdc++.h>
using namespace std;
int Floor(int arr[],int l,int h,int a)
{
    int k=(l+h)/2;
    if(l<h)
    {
        if(arr[k]==a)
            return a;
        else if(arr[k]>a)
            return Floor(arr,l,k-1,a);
        else if(arr[k]<a)
            if(arr[k+1]<=a)
                return Floor(arr,k+1,h,a);
            else
                return arr[k];
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
    int l;
    cin>>l;
    cout<<Floor(arr,0,k-1,l)<<endl;
    return 0;
}

