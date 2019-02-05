#include <bits/stdc++.h>

using namespace std;
int max(int a,int b)
{
    return a>b?a:b;
}
int min(int a,int b)
{
    return a<b? a : b;
}
int Median(int arr1[],int arr2[],int l1,int h1,int l2,int h2){
    int k1=(l1+h1)/2;
    int k2=(l2+h2)/2;
    if(h1-l1>1&&h2-l2>1){
        if(arr1[k1]==arr2[k2])
            return arr1[k1];
        else if(arr1[k1]<arr2[k2])
            return Median(arr1,arr2,k1,h1,l2,k2);
        else if(arr1[k1]>arr2[k2])
            return Median(arr1,arr2,l1,k1,k2,h2);
    }
    return((max(arr1[l1],arr2[l2])+min(arr1[h1],arr2[h2]))/2);
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr1[100],arr2[100];
    for(int i=0;i<k;i++)
        cin>>arr1[i];
    for(int i=0;i<k;i++)
        cin>>arr2[i];
    cout<<Median(arr1,arr2,0,k-1,0,k-1)<<endl;
    return 0;
}
