//Selection Sort.
#include<iostream>
using namespace std;

void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void SelectionSort(int arr[],int n){
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(arr[i]>arr[j])
                Swap(arr[i],arr[j]);
        }
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    SelectionSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
