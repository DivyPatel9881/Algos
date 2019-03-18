//Given a sorted array and number x, find the pair in array whose sum is closest to x.
#include <iostream>
using namespace std;
struct Pair{
    int a,b;
};
int Abs(int a){
    if(a<0)
        return -a;
    return a;
}
struct Pair FindSumPair(int arr[],int n,int k){
    struct Pair p;
    int mid=n/2;
    int l=mid-1;
    int h=mid;
    p.a=-1;
    p.b=-1;
    int MIN = 2987833;
    while(l>=0 && h<=n-1){
        int sum=arr[l]+arr[h];
        int absdiff = Abs(sum-k);
        if(MIN>absdiff)
        {
            MIN = absdiff;
            p.a=arr[l];
            p.b=arr[h];
        }
        if(sum<k)
            h++;
        else if(sum>k)
            l--;
        else if(sum==k)
            break;
    }
    return p;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    struct Pair p=FindSumPair(arr,n,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
