//Given an unsorted array and a number n, find if there exists a pair of elements in the array whose difference is n.
#include <bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
struct Pair FindPairDiff(int arr[],int n,int k)
{
    sort(arr,arr+n);
    int l=0;
    int r=1;
    struct Pair p;
    p.a=-1;
    p.b=-1;
    while(l<n && r<n){
        int diff = arr[r]-arr[l];
        if(diff==k)
        {
            p.a = arr[l];
            p.b = arr[r];
            break;
        }
        else if(diff>k)
            l++;
        else if(diff<k)
            r++;
    }
    return p;
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    struct Pair p = FindPairDiff(arr,k,n);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
