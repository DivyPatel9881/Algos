//Given a sorted and rotated array, find if there is a pair with a given sum
#include<iostream>
using namespace std;
struct Pair{
    int a,b;
};
int LIndex(int a,int p,int n){
    if(p==-1 || a<=n-1)
        return a;
    return a%n;
}
int HIndex(int a,int p,int n){
    if(p==-1 || a>=0)
        return a;
    return a+n;
}
int Pivot(int arr[],int l,int h){
    if(l<=h)
    {
        int k=(l+h)/2;
        if(k+1<=h && arr[k]>arr[k+1])
            return k;
        else if(arr[k]<arr[l])
            return Pivot(arr,l,k-1);
        else if(arr[k]>arr[l])
            return Pivot(arr,k,h);
        else if(arr[k]==arr[l])
        {
            if(k+1<=h && arr[k]<arr[k+1])
                return k+1;
            return k;
        }
    }
}
struct Pair FindPairSum(int arr[],int n,int k){
    int p;
    if(arr[0]<arr[n-1])
        p=-1;
    else
        p=Pivot(arr,0,n-1);
    int l1=p+1;
    int l2=p;
    struct Pair P;
    P.a=-1;
    P.b=-1;
    while(l1!=l2)
    {
        int sum=arr[l1]+arr[l2];
        if(sum==k)
        {
            P.a=arr[l1];
            P.b=arr[l2];
            break;
        }
        else if(sum>k)
            l2 = HIndex(--l2,p,n);
        else if(sum<k)
            l1 = LIndex(++l1,p,n);
    }
    return P;
}
int main(){
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    struct Pair p = FindPairSum(arr,k,n);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
