#include<bits/stdc++.h>
using namespace std;
struct Array{
    int arr[100];
    int len=0;
};
struct Array FindAll(int arr[],int len,int k){
    map <int,int> Count;
    set <int> lookup;
    set <int> :: iterator it;
    for(int i=0;i<len;i++)
    {
        Count[arr[i]]++;
        lookup.insert(arr[i]);
    }
    struct Array a;
    for(it =lookup.begin();it!=lookup.end();it++ ){
        int cri = len/k;
        int num = *it;
        if(Count[num]>cri)
            a.arr[a.len++]=num;
    }
    return a;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int l;
    cout<<"Enter a number : ";
    cin>>l;
    struct Array a = FindAll(arr,k,l);
    for(int i=0;i<a.len;i++)
        cout<<a.arr[i]<<endl;
    return 0;
}
