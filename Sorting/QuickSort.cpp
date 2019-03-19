//Quick Sort.
#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int Pivot(int arr[],int l,int h){
    int pivot=l;
    int p=arr[h];
    for(int i=l;i<h;i++){
        if(arr[i]<p)
        {
            Swap(arr[i],arr[pivot]);
            pivot++;
        }
    }
    Swap(arr[h],arr[pivot]);
    return pivot;
}
void QuickSort(int arr[],int l,int h){
    if(l<h){
        int p=Pivot(arr,l,h);
        QuickSort(arr,l,p-1);
        QuickSort(arr,p+1,h);
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    QuickSort(arr,0,n-1);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
