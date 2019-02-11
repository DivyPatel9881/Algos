#include<bits/stdc++.h>
using namespace std;
int First(int arr[],int l,int h,int a)
{
    int k=(l+h)/2;
    if(l<=h)
    {
        if(arr[k]==a)
        {
            if(k-1>=l)
            {
                if(arr[k-1]!=arr[k])
                    return k;
                else if(arr[k-1]==arr[k])
                    return First(arr,0,k-1,a);
            }
            else
                return k;
        }
        else if(arr[k]<a)
            return First(arr,k+1,h,a);
        else if(arr[k]>a)
            return First(arr,0,k-1,a);
    }
    return -1;
}
int Last(int arr[],int l,int h,int a)
{
    int k=(l+h)/2;
    if(l<=h)
    {
        if(arr[k]==a)
        {
            if(k+1<=h)
            {
                if(arr[k+1]!=arr[k])
                    return k;
                else if(arr[k+1]==arr[k])
                    return Last(arr,k+1,h,a);
            }
            else
                return k;
        }
        else if(arr[k]<a)
            return Last(arr,k+1,h,a);
        else if(arr[k]>a)
            return Last(arr,0,k-1,a);
    }
    return -1;
}
int Occurences(int arr[],int len,int a)
{
    int l = First(arr,0,len-1,a);
    int h = Last(arr,0,len-1,a);
    if(l==-1 && h==-1)
        return 0;
    return h-l+1;
}
map <int,int> lookup;
int Compare(const void *a,const void *b){
    return -(lookup[*(int *)a] - lookup[*(int *)b]);
}
void Sort(int arr1[],int l1,int arr2[],int l2){
    sort(arr1,arr1+l1);
    int sum=0;
    for(int i=0;i<l2;i++)
        lookup[arr2[i]] = l2-i;
    for(int i=0;i<l2;i++)
        sum+=Occurences(arr1,l1,arr2[i]);
    qsort(arr1,l1,sizeof(int),Compare);
    sort(arr1+sum-1,arr1+l1);
}
int main(){
    int k1,k2;
    cout<<"Enter a number : ";
    cin>>k1>>k2;
    int arr1[100],arr2[100];
    for(int i=0;i<k1;i++)
        cin>>arr1[i];
    for(int i=0;i<k2;i++)
        cin>>arr2[i];
    Sort(arr1,k1,arr2,k2);
    for(int i=0;i<k1;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    return 0;
}
