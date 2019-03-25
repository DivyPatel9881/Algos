//Find surpasser count for each elements.
#include<bits/stdc++.h>
using namespace std;
map<int,int>m;
void Merge(int arr[],int l,int k,int h){
    int arr1[h-l+1];
    int i=0;
    int l1=l;
    int l2=k+1;
    while(l1<=k&&l2<=h){
        if(arr[l1]<arr[l2])
        {
            m[arr[l1]]+=(h-l2+1);
            arr1[i++]=arr[l1++];

        }
        else if(arr[l1]>arr[l2])
            arr1[i++]=arr[l2++];
    }
    while(l1<=k)
        arr1[i++]=arr[l1++];
    while(l2<=h)
        arr1[i++]=arr[l2++];
    for(int j=l;j<=h;j++)
        arr[j]=arr1[j-l];
}
void MergeSort(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        cout<<l<<" "<<k<<" "<<h<<endl;
        MergeSort(arr,l,k);
        MergeSort(arr,k+1,h);
        Merge(arr,l,k,h);
    }
}
vector <int> FindSurpasser(int arr[],int n){
    int arr1[100];
    vector <int>v;
    for(int i=0;i<n;i++)
        arr1[i]=arr[i];
    MergeSort(arr1,0,n-1);
    for(int i=0;i<n;i++)
        v.push_back(m[arr[i]]);
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector <int> v=FindSurpasser(arr,n);
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
