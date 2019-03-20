//Find the element that appears once.
#include<bits/stdc++.h>
using namespace std;
int FindNumAppearOne(int arr[],int n){
    map<int,int>m;
    set<int> s;
    set <int>::iterator it;
    for(int i=0;i<n;i++)
    {
        m[arr[i]]++;
        s.insert(arr[i]);
    }
    for(it=s.begin();it!=s.end();it++)
        if(m[*it]==1)
            return *it;
    return -1;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<FindNumAppearOne(arr,n)<<endl;
    return 0;
}
