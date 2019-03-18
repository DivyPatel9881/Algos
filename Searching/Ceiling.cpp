// Given a sorted array and a value x , find value equal to or greater than x from the array.
#include <iostream>
using namespace std;

int Ceil(int arr[],int l,int h,int k)
{
    if(l<h){
        int k1 =(l+h)/2;
        if(arr[k1]>k)
            return Ceil(arr,l,k1,k);
        else if(arr[k1]<k)
            return Ceil(arr,k1+1,h,k);
        else if(arr[k1]==k)
            return arr[k1];
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
    int x;
    cin>>x;
    cout<<Ceil(arr,0,k-1,x)<<endl;
    return 0;
}
