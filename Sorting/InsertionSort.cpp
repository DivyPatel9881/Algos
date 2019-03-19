//Insertion Sort.
#include<iostream>
using namespace std;
void InsertionSort(int arr[],int n){
    for(int i=1;i<=n-1;i++)
    {
        int t=arr[i];
        int j;
        for(j=i-1;j>=0;j--){
            if(arr[j]>t)
                arr[j+1]=arr[j];
        }
        arr[j+1]=t;
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    InsertionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
