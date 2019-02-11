#include<iostream>
using namespace std;
int OddOccur(int arr[],int k){
    int x = arr[0];
    for(int i=1;i<k;i++){
        x = x^arr[i];
    }
    return x;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<OddOccur(arr,k)<<endl;
    return 0;
}
