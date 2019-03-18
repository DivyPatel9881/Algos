//Given an array of n distinct integers sorted in ascending order, write a function that returns a Fixed Point in the array, if there is any Fixed Point present in array, else returns -1. Fixed Point in an array is an index i such that arr[i] is equal to i. Note that integers in array can be negative.
#include <iostream>
using namespace std;

int FixedPoint(int arr[100],int l,int h)
{
    if(l<=h)
    {
        int k=(l+h)/2;
        if(arr[k]>k)
            return FixedPoint(arr,l,k-1);
        else if(arr[k]<k)
            return FixedPoint(arr,k+1,h);
        else if(arr[k]==k)
            return k;
    }
    return -1;
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FixedPoint(arr,0,k-1)<<endl;
    return 0;
}
