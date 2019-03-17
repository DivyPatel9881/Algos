// An Array of integers is given, both +ve and -ve. You need to find the two elements such that their sum is closest to zero.
#include <bits/stdc++.h>
#define MAX 67367676
using namespace std;

int Abs(int a)
{
    if(a<0)
        return -a;
    return a;
}
struct Pair
{
    int a,b;
};

struct Pair FindClosestPair(int arr[100],int n)
{
    sort(arr,arr+n);
    int l=0;
    int r=n-1;
    int Min=MAX;
    struct Pair p;
    while(l!=r){
        int sum = arr[r]+arr[l];
        int abssum = Abs(sum);
        if(sum==0)
        {
            p.a=arr[l];
            p.b=arr[r];
            return p;
        }
        else if(Min>abssum)
        {
            p.a=arr[l];
            p.b=arr[r];
            Min = abssum;
        }
        if(sum<0)
            l++;
        else if(sum>0)
            r--;
    }
    return p;
}
int main()
{
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Pair p = FindClosestPair(arr,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
