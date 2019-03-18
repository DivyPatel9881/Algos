//K largest element in an array.
#include <iostream>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void Heapify(int arr[],int n,int k)
{
    int l=2*k+1;
    int r=2*k+2;
    if(r<=n-1){
        int largest = k;
        if(arr[largest]<arr[l])
            largest=l;
        if(arr[largest]<arr[r])
            largest=r;
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
int KthLargestElement(int arr[],int n,int k)
{
    int l = (n-2)/2;
    for(int i=l;i>=0;i--)
        Heapify(arr,n,i);
    for(int i=n-1;i>n-k;i--){
        Swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
    return arr[0];
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    cout<<KthLargestElement(arr,k,n)<<endl;
    return 0;
}
