//Given two sorted arrays and a number x, find the pair whose sum is closest to x and the pair has an element from each array.
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
struct Pair ClosestPair(int arr1[],int n1,int arr2[],int n2,int k){
    int l1=0,l2=n2-1;
    struct Pair p;
    int MIN=7847843;
    while(l1<n1 && l2>=0){
        int diff=arr1[l1]+arr2[l2]-k;
        int absdiff = Abs(diff);
        if(MIN>absdiff){
            MIN = absdiff;
            p.a=arr1[l1];
            p.b=arr2[l2];
        }
        if(diff>0)
            l2--;
        else if(diff<0)
            l1++;
        else
            break;
    }
    return p;
}
int main(){
    int n1,n2;
    cin>>n1;
    int arr1[100];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    int arr2[100];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    int k;
    cin>>k;
    struct Pair p=ClosestPair(arr1,n1,arr2,n2,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
