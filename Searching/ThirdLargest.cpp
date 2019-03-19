//Third Largest integer in Array.
#include<iostream>
using namespace std;
int ThirdLargest(int arr[],int n){
    int l1=0,l2=0,l3=0;
    for(int i=0;i<n;i++){
        if(l1<arr[i])
        {
            l3=l2;
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>l2)
        {
            l3=l2;
            l2=arr[i];
        }
        else if(arr[i]>l3)
            l3=arr[i];
    }
    return l3;
}
int main(){
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<ThirdLargest(arr,k)<<endl;
    return 0;
}
//Third Largest integer in Array.
#include<iostream>
using namespace std;
int ThirdLargest(int arr[],int n){
    int l1=0,l2=0,l3=0;
    for(int i=0;i<n;i++){
        if(l1<arr[i])
        {
            l3=l2;
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>l2)
        {
            l3=l2;
            l2=arr[i];
        }
        else if(arr[i]>l3)
            l3=arr[i];
    }
    return l3;
}
int main(){
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<ThirdLargest(arr,k)<<endl;
    return 0;
}

