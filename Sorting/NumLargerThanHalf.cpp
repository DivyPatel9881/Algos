//Find elements larger than half of the elements.
#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
void Heapify(int arr[],int n,int k){
    int l=2*k+1;
    int r=2*k+2;
    if(r<n){
        int largest=k;
        if(arr[largest]<arr[l])
            largest=l;
        if(arr[largest]<arr[r])
            largest=r;
        if(k!=largest)
        {
            Swap(arr[k],arr[largest]);
            Heapify(arr,n,largest);
        }
    }
    else if(l<n){
        int largest=k;
        if(arr[largest]<arr[l])
            largest=l;
        if(k!=largest)
        {
            Swap(arr[k],arr[largest]);
            Heapify(arr,n,largest);
        }
    }
}
vector<int> FindHalfEleGre(int arr[],int n){
    vector <int> v;
    int l = (n-2)/2;
    int r = n/2;
    int diff=n-r;
    for(int i=l;i>=0;i--)
        Heapify(arr,n,i);
    for(int i=n-1;i>=n-diff;i--){
        v.push_back(arr[0]);
        Swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
    return v;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector <int> v = FindHalfEleGre(arr,n);
    for(int i=v.size()-1;i>=0;i--)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
