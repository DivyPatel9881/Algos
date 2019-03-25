//Finding missing elements of a range.
#include<bits/stdc++.h>
using namespace std;
vector <int>FindMissingElements(int arr[],int n,int l,int h){
    vector<int>v;
    map<int,int>m;
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    for(int i=l;i<=h;i++)
        if(m[i]==0)
            v.push_back(i);
    return v;
}
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int l,h;
    cin>>l>>h;
    vector <int>v=FindMissingElements(arr,n,l,h);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
