//Longest subsequence such that difference between adjacent is one.
#include<bits/stdc++.h>
using namespace std;
map<int,int> MaxL;
int Abs(int a){
    if(a<0)
        return -a;
    return a;
}
int Max(int a,int b){
    return a>b?a:b;
}
int MaxSubDiff1(int arr[],int n,int l1,int l2){
    int k= MaxL[l1];
    if(k!=0)
        return k;
    else{
        if(l1<1)
        {
            MaxL[l1] = 0;
            return 0;
        }
        else if(Abs(arr[l1-1]-l2)==1)
        {
            MaxL[l1] = Max(1+MaxSubDiff1(arr,n,l1-1,arr[l1-1]),MaxSubDiff1(arr,n,l1-1,l2));
            return MaxL[l1];
        }
        else{
            MaxL[l1] = MaxSubDiff1(arr,n,l1-1,l2);
            return MaxL[l1];
        }
    }
}
int MaxSubLen(int arr[],int n){
    int k=0;
    for(int i=n;i>=1;i--)
        k=Max(k,1+MaxSubDiff1(arr,n,i-1,arr[i-1]));
    return k;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSubLen(arr,n)<<endl;
    return 0;
}
