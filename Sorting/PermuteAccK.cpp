//Permute the arrays such that every pair is a sum greater than or equal to k.
#include<bits/stdc++.h>
using namespace std;
int Compare(const void *a,const void *b){
    return *(int *)b - *(int *)a;
}
void SortAccK(int arr1[],int arr2[],int n,int k){
    sort(arr1,arr1+n);
    qsort(arr2,n,sizeof(arr2),Compare);
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
    int k;
    cin>>k;
    SortAccK(arr1,arr2,n,k);
    for(int i=0;i<n;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    for(int i=0;i<n;i++)
        cout<<arr2[i]<<" ";
    cout<<endl;
    return 0;
}
