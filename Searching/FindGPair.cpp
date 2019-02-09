#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int arr[2];
};
int Pivot(int arr[],int l,int h)
{
    int k=(l+h)/2;
    if(l<h)
    {
        if(k-1>=l && k+1<=h && arr[k-1]<arr[k] && arr[k+1]<arr[k])
            return k;
        else if(arr[l]<arr[k])
            return Pivot(arr,k,h);
        else if(arr[l]>arr[k])
            return Pivot(arr,l,k-1);
        else if(l==k && arr[l]<arr[h])
            return h;
        else if(l==k && arr[l]>arr[h])
            return l;
    }
    return l;
}
int L(int l,int len){
    if(l<len)
        return l;
    else
        return l%len;
}
int H(int h,int len)
{
    if(h>=0)
        return h;
    else
        return len+h;
}
struct Pair FindSumPair(int arr[],int len,int a)
{
    int p = Pivot(arr,0,len-1);
    struct Pair p1 ;
    p1.arr[0]=-1;
    p1.arr[1]=-1;
    int h=H(p,len),l=L(p+1,len);
    while(h!=l)
    {
        int sum = arr[l]+arr[h];
        int diff = a-sum;
        if(diff==0)
        {
            p1.arr[0]=arr[l];
            p1.arr[1]=arr[h];
            return p1;
        }
        else if(diff>0)
            l=L(l+1,len);
        else if(diff<0)
            h=H(h-1,len);
    }
    return p1;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int l;
    cout<<"Enter a number : ";
    cin>>l;
    struct Pair p = FindSumPair(arr,k,l);
    cout<<p.arr[0]<<" "<<p.arr[1]<<endl;
    return 0;
}
