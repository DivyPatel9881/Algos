//Heap sort.
#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void Heapify(int arr[],int n,int k){
    int l=2*k+1;
    int h=2*k+2;
    if(h<=n-1){
        int largest=k;
        if(arr[largest]<arr[l])
            largest=l;
        if(arr[largest]<arr[h])
            largest=h;
        if(largest!=k){
            Swap(arr[largest],arr[k]);
            Heapify(arr,n,largest);
        }
    }
    else if(l<=n-1){
        int largest=k;
        if(arr[largest]<arr[l])
            largest=l;
        if(largest!=k)
        {
            Swap(arr[largest],arr[k]);
            Heapify(arr,n,largest);
        }
    }
}
void HeapSort(int arr[],int n){
    int l=(n-2)/2;
    for(int i=l;i>=0;i--)
        Heapify(arr,n,i);
    for(int i=n-1;i>=1;i--){
        Swap(arr[i],arr[0]);
        Heapify(arr,i,0);
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    HeapSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
