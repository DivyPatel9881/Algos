//Count Number of occurences in a sorted array.
#include <iostream>
using namespace std;
int HIndex(int arr[],int l,int h,int k){
    if(l<=h){
        int k1=(l+h)/2;
        if(arr[k1]<k)
            return HIndex(arr,k1+1,h,k);
        else if(arr[k1]>k)
            return HIndex(arr,l,k1-1,k);
        else if(arr[k1]==k)
        {
            if(k1+1<=h && arr[k1+1]!=arr[k1])
                return k1;
            else if(k1+1<=h && arr[k1+1]==arr[k1])
                return HIndex(arr,k1+1,h,k);
            else
                return k1;
        }
    }
    return -1;
}
int LIndex(int arr[],int l,int h,int k){
    if(l<=h)
    {
        int k1 = (l+h)/2;
        if(arr[k1]<k)
            return LIndex(arr,k1+1,h,k);
        else if(arr[k1]>k)
            return LIndex(arr,l,k1-1,k);
        else if(arr[k1]==k){
            if(k1-1>=l && arr[k1-1]==arr[k1])
                return LIndex(arr,l,k1-1,k);
            else if(k1-1>=l && arr[k1-1]!=arr[k1])
                return k1;
            else
                return k1;
        }
    }
    return -1;
}
int FrequencyCount(int arr[],int k,int n)
{
    int l=LIndex(arr,0,k-1,n);
    int h=HIndex(arr,0,k-1,n);
    if(l!=-1)
    {
        int Count = h-l+1;
        return Count;
    }
    return -1;
}
int main()
{
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    cout<<FrequencyCount(arr,k,n)<<endl;
    return 0;
}
