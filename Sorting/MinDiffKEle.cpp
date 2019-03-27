//Choose k elements such that difference between minimum and maximum is minimum.
#include<bits/stdc++.h>
using namespace std;
vector<int> KMinDiff(int arr[],int n,int k){
    sort(arr,arr+n);
    int Min=637333;
    int l1,l2;
    for(int i=0;i<=n-k;i++){
        int diff = arr[i+k-1]-arr[i];
        if(diff<Min)
        {
            l1=i;
            l2=i+k-1;
            Min=diff;
        }
    }
    vector <int> v;
    for(int i=l1;i<=l2;i++)
        v.push_back(arr[i]);
    return v;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    vector<int> v=KMinDiff(arr,n,k);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
