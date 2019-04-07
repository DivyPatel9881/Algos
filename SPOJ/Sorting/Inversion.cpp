//Inversion Count
#include<iostream>
using namespace std;
long long Merge(long long arr[],long long l,long long k,long long h){
    long long arr1[h-l+1];
    long long in=0;
    long long l1 = l;
    long long l2 = k+1;
    long long sum=0;
    while(l1<=k && l2<=h){
        if(arr[l1]<=arr[l2])
            arr1[in++]=arr[l1++];
        else if(arr[l1]>arr[l2]){
            sum+=k-l1+1;
            arr1[in++]=arr[l2++];
        }
    }
    while(l1<=k)
        arr1[in++]=arr[l1++];
    while(l2<=h)
        arr1[in++]=arr[l2++];
    for(long long i=l;i<=h;i++)
        arr[i]=arr1[i-l];
    return sum;
}
long long InversionCount(long long arr[],long long l,long long h){
    long long k = (l+h)/2;
    if(l<h)
    {
        long long k1 = InversionCount(arr,l,k);
        long long k2 = InversionCount(arr,k+1,h);
        long long k3 = Merge(arr,l,k,h);
        return k1+k2+k3;
    }
    return 0;
}
int main(){
    long long t;
    cin>>t;
    for(long long i=0;i<t;i++){
        long long arr[200000];
        long long n;
        cin>>n;
        for(long long i=0;i<n;i++)
            cin>>arr[i];
        cout<<InversionCount(arr,0,n-1)<<endl;
    }
    return 0;
}
