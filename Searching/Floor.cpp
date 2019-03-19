#include<iostream>
using namespace std;
int Floor(int arr[],int l,int h,int v){
    if(l<=h){
        int k=(l+h)/2;
        if(arr[k]==v)
            return v;
        else if(arr[k]>v)
            return Floor(arr,l,k-1,v);
        else if(arr[k]<v)
        {
            if(l==h)
                return arr[k];
            else if(h-l==1 && arr[k+1]<=v)
                return arr[k+1];
            else if(h-l==1 && arr[k+1]>v)
                return arr[k];
            return Floor(arr,k,h,v);
        }
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<Floor(arr,0,n-1,k)<<endl;
    return 0;
}
