#include<bits/stdc++.h>
using namespace std;
struct Array{
    int arr[100];
    int len;
};
struct Array FindAll(int arr1[],int len1,int arr2[],int len2,int arr3[],int len3)
{
    int l1=0,l2=0,l3=0;
    struct Array g;
    g.len=0;
    while(l1<=len1-1 && l2<=len2-1 && l3<=len3-1)
    {
        if(arr1[l1]==arr2[l2])
        {
            if(arr1[l1]==arr3[l3])
            {
                g.arr[g.len++] = arr1[l1];
                l1++;
                l2++;
                l3++;
            }
            else if(arr1[l1]>arr3[l3])
                l3++;
            else if(arr1[l1]<arr3[l3])
            {
                l1++;
                l2++;
            }
        }
        else if(arr1[l1]<arr2[l2])
            l1++;
        else if(arr2[l2]<arr1[l1])
            l2++;
    }
    return g;
}
int main(){
    int k1,k2,k3;
    cout<<"Enter the length of three arrays : ";
    cin>>k1>>k2>>k3;
    int arr1[100],arr2[100],arr3[100];
    for(int i=0;i<k1;i++)
        cin>>arr1[i];
    for(int i=0;i<k2;i++)
        cin>>arr2[i];
    for(int i=0;i<k3;i++)
        cin>>arr3[i];
    struct Array l = FindAll(arr1,k1,arr2,k2,arr3,k3);
    for(int i=0;i<l.len;i++)
        cout<<l.arr[i]<<" ";
    cout<<endl;
    return 0;
}
