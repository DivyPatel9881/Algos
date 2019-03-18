//Find largest pair sum in an unsorted array.
#include<iostream>
using namespace std;
int LargestSum(int arr[],int k){
    int l1=0;
    int l2=0;
    for(int i=0;i<k;i++)
    {
        if(arr[i]>l1)
        {
            l2=l1;
            l1=arr[i];
        }
        else{
            if(arr[i]>l2)
                l2=arr[i];
        }
    }
    return l1+l2;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<LargestSum(arr,n)<<endl;
    return 0;
}
