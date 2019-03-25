//Minimum difference between two elements.
#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
struct Pair MinimumDiffPair(int arr[],int n){
    sort(arr,arr+n);
    int Min=748748;
    struct Pair p;
    for(int i=0;i<n-1;i++)
    {
        int diff=arr[i+1]-arr[i];
        if(diff<Min)
        {
            Min=diff;
            p.a=arr[i];
            p.b=arr[i+1];
        }
    }
    return p;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    struct Pair p=MinimumDiffPair(arr,n);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
