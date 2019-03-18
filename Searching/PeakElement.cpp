//Find maximum element in an array which is first increasing and then decreasing.
#include <iostream>
using namespace std;
int FindPeak(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        if(k-1>=l && k+1<=h && arr[k-1]<arr[k] && arr[k]>arr[k+1])
            return arr[k];
        else if(k+1<=h && arr[k]>arr[k+1])
            return FindPeak(arr,l,k);
        else if(k+1<=h && arr[k]<arr[k+1])
            return FindPeak(arr,k+1,h);

    }
    return arr[l];
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FindPeak(arr,0,k-1)<<endl;
    return 0;
}
