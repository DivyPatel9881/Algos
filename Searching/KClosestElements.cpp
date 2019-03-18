//Given a sorted array arr[] and a value X, find the k closest elements to X in arr[]
#include <bits/stdc++.h>
using namespace std;
int CeilIn(int arr[],int l,int h,int k){
    if(l<h){
        int k1=(l+h)/2;
        if(arr[k1]<k)
            return CeilIn(arr,k1+1,h,k);
        else if(arr[k1]>k)
            return CeilIn(arr,l,k1,k);
        else if(arr[k1]==k)
            return k1;
    }
    if(l==h && arr[l]>=k)
        return l;
    return -1;
}
vector<int> FindClosest(int arr[],int n,int c,int k){
    vector <int> v;
    int p=CeilIn(arr,0,n-1,c);
    if(p==-1)
        p=n-1;
    int l=p-1;
    int h=p;
    if(arr[h]==c)
        h=p+1;
    int Count=0;
    while(Count<k && l>=0 && h<=n-1)
    {
        if(arr[h]-c<c-arr[l])
        {
            v.push_back(arr[h++]);
            Count++;
        }
        else if(arr[h]-c>c-arr[l])
        {
            v.push_back(arr[l--]);
            Count++;
        }
    }
    while(Count<k && l>=0)
    {
        v.push_back(arr[l--]);
        Count++;
    }
    while(Count<k && h<=n-1)
    {
        v.push_back(arr[h++]);
        Count++;
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int c,k;
    cin>>c>>k;
    vector <int> v=FindClosest(arr,n,c,k);
    vector <int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
