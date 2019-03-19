//Radix sort
#include<iostream>
#include<cmath>
using namespace std;
void RadixSort(int arr[],int n){
    int arr1[10][100];
    int arr2[10];
    int largest=0;
    for(int i=0;i<n;i++)
        if(largest<arr[i])
            largest=arr[i];
    int t=largest;
    int digs=0;
    while(t){
        t/=10;
        digs++;
    }
    for(int i=0;i<digs;i++){
        for(int j=0;j<10;j++)
            arr2[j]=0;
        for(int j=0;j<n;j++){
            int dig = arr[j]%int(pow(10,i+1));
            dig = dig/pow(10,i);
            arr1[dig][arr2[dig]++]=arr[j];
        }
        int h=0;
        for(int j=0;j<10;j++)
            for(int k=0;k<arr2[j];k++)
                arr[h++]=arr1[j][k];
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    RadixSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
