//Sort an array in wave form.
#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void SortWave(int arr[],int n){
    for(int i=1;i<n;i+=2){
        if(arr[i-1]>arr[i])
            Swap(arr[i-1],arr[i]);
        if(i+1<n && arr[i+1]>arr[i])
            Swap(arr[i+1],arr[i]);
    }
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    SortWave(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
