#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
int Partition(int arr[],int l,int h){
    int p=l;
    int p1=arr[h];
    for(int i=l;i<h;i++)
    {
        if(arr[i]<p1)
        {
            Swap(arr[i],arr[p]);
            p++;
        }
    }
    Swap(arr[p],arr[h]);
    return p;
}
int KthEle(int arr[],int l,int h,int k)
{
    if(k>0 && k<h-l+1)
    {
        int p = Partition(arr,l,h);
        if(p-l==k-1)
            return arr[k];
        else if(p-l>k-1)
            return KthEle(arr,l,p-1,k);
        return KthEle(arr,p+1,h,k-p-1);
    }
    else if(k==h-l+1)
        return arr[l];
}
int main(){
    int k=0;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<"Enter Kth index : ";
    int n;
    cin>>n;
    cout<<KthEle(arr,0,k-1,n)<<endl;
    return 0;

}
