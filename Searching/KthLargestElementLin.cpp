//Given an array and a number k where k is smaller than size of array, we need to find the k’th smallest element in the given array. It is given that ll array elements are distinct.
#include<iostream>
using namespace std;
void Swap(int &a,int &b)
{
    int t=a;
    a=b;
    b=t;
}
int Pivot(int arr[],int l,int h){
    int p = arr[h];
    int pi=l;
    for(int i=l;i<=h-1;i++)
    {
        if(arr[i]<p)
        {
            Swap(arr[pi],arr[i]);
            pi++;
        }
    }
    Swap(arr[h],arr[pi]);
    return pi;
}
int KthLargestElement(int arr[],int l,int h,int k){

    int p = Pivot(arr,l,h);
    if(p+1>k)
        return KthLargestElement(arr,l,p-1,k);
    else if(p+1<k)
        return KthLargestElement(arr,p+1,h,k);
    else if(p+1==k)
        return arr[p];
}
int main(){
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    n = k-n+1;
    cout<<KthLargestElement(arr,0,k-1,n)<<endl;
    return 0;
}
