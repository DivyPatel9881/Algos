//Find the point where maximum intervals overlap
#include<iostream>
using namespace std;
int MaxOverlapPoint(int arr1[],int arr2[],int n){
    int Max=0;
    for(int i=0;i<n;i++)
        if(arr2[i]>Max)
            Max=arr2[i];
    int *ptr = new int[Max];
    for(int i=0;i<Max;i++)
        ptr[i]=0;
    for(int i=0;i<n;i++){
        int l=arr1[i];
        int r=arr2[i];
        ptr[l-1]++;
        if(r<Max)
            ptr[r]--;
    }
    int prev=ptr[0];
    int Max1=0;
    for(int i=1;i<Max;i++)
    {
        ptr[i]=ptr[i]+prev;
        prev=ptr[i];
        if(Max1<ptr[i])
            Max1=i;
    }
    return Max1+1;
}
int main(){
    int n;
    cin>>n;
    int arr1[100];
    int arr2[100];
    for(int i=0;i<n;i++)
        cin>>arr1[i];
    for(int i=0;i<n;i++)
        cin>>arr2[i];
    cout<<MaxOverlapPoint(arr1,arr2,n)<<endl;
    return 0;
}
