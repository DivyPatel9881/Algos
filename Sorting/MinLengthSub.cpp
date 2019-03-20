//Find the minimum length of the subarray by sorting which gives a complete sorted array.
#include<iostream>
using namespace std;
struct Pair{
    int a,b;
};
struct Pair FindMinLength(int arr[],int n){
    struct Pair p;
    int l,h;
    for(int i=0;i<n-1;i++){
        if(arr[i]>arr[i+1])
        {
            l=i;
            break;
        }
    }
    for(int i=n-1;i>=1;i--){
        if(arr[i]<arr[i-1])
        {
            h=i;
            break;
        }
    }
    int small=2378378,large=0;
    for(int i=l;i<=h;i++){
        if(small>arr[i])
            small=arr[i];
        if(large<arr[i])
            large=arr[i];
    }
    for(int i=0;i<=l;i++)
        if(arr[i]>small)
            l=i;
    for(int i=n-1;i>=h;i--)
        if(arr[i]<large)
            h=i;
    p.a=l;
    p.b=h;
    return p;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    struct Pair p = FindMinLength(arr,n);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
