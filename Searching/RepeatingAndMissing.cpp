//Given an unsorted array of size n. Array elements are in the range from 1 to n. One number from set {1, 2, …n} is missing and one number occurs twice in the array. Find these two numbers.
#include<iostream>
using namespace std;
struct Pair{
    int a,b;
};
struct Pair RepeatingAndMissing(int arr[],int n)
{
    int arr1[n];
    int r;
    struct Pair p;
    int sum=0;
    for(int i=0;i<n;i++){
        sum+=arr[i];
        if(arr1[arr[i]-1]!=1)
            arr1[arr[i]-1]=1;
        else
            r = arr[i];
    }
    p.a=r;
    p.b=(n*(n+1)/2)-(sum-r);
    return p;
}
int main(){
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Pair p = RepeatingAndMissing(arr,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
