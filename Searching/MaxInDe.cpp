#include<bits/stdc++.h>
using namespace std;

int Find(int arr[],int l,int h){
    int k=(l+h)/2;
    if(l<=h)
    {
        if((k-1>=l) && (k+1<=h) && (arr[k-1]<arr[k]) && (arr[k+1]<arr[k]))
            return arr[k];
        else if(k+1<=h && arr[k]>arr[k+1])
            return Find(arr,l,k);
        else if(k+1<=h && arr[k]<arr[k+1])
            return Find(arr,k+1,h);
        else if(l==h)
            return arr[k];
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<Find(arr,0,k-1)<<endl;
    return 0;
}
