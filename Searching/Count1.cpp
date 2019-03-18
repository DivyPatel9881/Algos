//Count 1s in sorted Binary array.
#include<iostream>
using namespace std;
int HIndex(int arr[],int l,int h){
    if(l<=h){
        int k=(l+h)/2;
        if(k+1<=h && arr[k]==1 && arr[k+1]==0)
            return k;
        else if(k+1<=h && arr[k]==1 && arr[k+1]==1)
            return HIndex(arr,k+1,h);
        else if(arr[k]==1)
            return k;
        else if(arr[k]==0)
            return HIndex(arr,l,k-1);
    }
    return -1;
}
int Count1(int arr[],int n){
    int h = HIndex(arr,0,n-1);
    return h+1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<Count1(arr,n)<<endl;
    return 0;
}
