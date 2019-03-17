//Linear Search
#include<iostream>
using namespace std;

bool LinearSearch(int arr[],int n,int k){
    for(int i=0;i<n;i++)
    {
        if(arr[i]==k)
            return true;
    }
    return false;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<LinearSearch(arr,n,k)<<endl;
    return 0;
}
