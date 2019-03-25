//sum of all elements between k1 and k2 small elements.
#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void Heapify(int arr[],int n,int k){
    int l=2*k+1;
    int r=2*k+2;
    if(r<n){
        int smallest=k;
        if(arr[smallest]>arr[l])
            smallest=l;
        if(arr[smallest]>arr[r])
            smallest=r;
        if(k!=smallest)
        {
            Swap(arr[k],arr[smallest]);
            Heapify(arr,n,smallest);
        }
    }
    else if(l<n){
        int smallest=k;
        if(arr[smallest]>arr[l])
            smallest=l;
        if(k!=smallest)
        {
            Swap(arr[k],arr[smallest]);
            Heapify(arr,n,smallest);
        }
    }
}
int SumBetw(int arr[],int n,int k1,int k2){
    int l=(n-2)/2;
    for(int i=l;i>=0;i--)
        Heapify(arr,n,i);
    int sum=0;
    for(int i=n-1;i>=n-k2;i--){
        if(i<=n-k1)
            sum+=arr[0];
        Swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k1,k2;
    cin>>k1>>k2;
    cout<<SumBetw(arr,n,k1,k2);
    return 0;
}
