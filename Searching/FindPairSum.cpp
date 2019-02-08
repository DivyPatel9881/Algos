#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
struct Pair{
    int arr[2];
};
int Abs(int i)
{
    if(i<0)
        return -i;
    return i;
}
struct Pair FindPair(int arr[],int len,int a)
{
    struct Pair p;
    sort(arr,arr+len);
    int l=0,h=len-1;
    int small = MAX;
    while(l != h)
    {
        int sum = arr[l]+arr[h];
        int diff =  a-sum;
        int abs_diff = Abs(diff);
        if(abs_diff<small)
        {
            small = abs_diff;
            p.arr[0] = arr[l];
            p.arr[1] = arr[h];
        }
        if(diff>0)
            l++;
        else if(diff<0)
            h--;
        else if(diff==0)
            return p;
    }
    return p;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<"Enter a number : ";
    int n;
    cin>>n;
    struct Pair p = FindPair(arr,k,n);
    cout<<p.arr[0]<<" "<<p.arr[1]<<endl;
    return 0;
}
