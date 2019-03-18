//Find the minimum element in sorted and rotated array
#include <iostream>
using namespace std;
int Pivot(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        if(arr[k]>arr[l])
        {
            if(k+1<=h && arr[k+1]<arr[k])
                return k;
            return Pivot(arr,k,h);
        }
        else if(arr[k]<arr[l])
            return Pivot(arr,l,k-1);
        else if(arr[k]==arr[l])
        {
            if(arr[k]>arr[k+1])
                return k;
            return k+1;
        }
    }
    return l;
}
int MinSortedRotated(int arr[],int n){
    if(arr[0]<arr[n-1])
        return arr[0];
    int k = Pivot(arr,0,n-1);
    return arr[k+1];
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<MinSortedRotated(arr,k)<<endl;
    return 0;
}
