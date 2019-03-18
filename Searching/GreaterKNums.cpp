//Given an array of of size n and a number k, find all elements that appear more than n/k times
#include <bits/stdc++.h>
using namespace std;
set <int> FindNums(int arr[],int n,int k){
    int l = n/k;
    set <int> temp;
    set <int> fin;
    map <int,int> m;
    set <int>::iterator it;
    for(int i=0;i<n;i++){
        int k = arr[i];
        temp.insert(k);
        m[arr[i]]++;
    }
    for(it = temp.begin();it!=temp.end();it++){
        if(m[*it]>l)
            fin.insert(*it);
    }
    return fin;
}
int main(){
    int arr[100];
    int k;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int n;
    cin>>n;
    set <int> s = FindNums(arr,k,n);
    set <int>:: iterator it;
    for(it=s.begin();it!=s.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
