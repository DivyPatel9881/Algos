//Coin change.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> C;
int CountChange(int arr[],int n,int k){
    pair<int,int> p;
    p.first=n;
    p.second=k;
    int l=C[p];
    if(l!=0)
        return l;
    else{
        if(k==0)
        {
            C[p]=1;
            return 1;
        }
        else if(n==0 || k<0)
        {
            C[p]=0;
            return 0;
        }
        else{
            C[p] = CountChange(arr,n-1,k)+CountChange(arr,n,k-arr[n-1]);
            return C[p];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<CountChange(arr,n,k)<<endl;
    return 0;
}
