#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> C;
int BinoCoe(int n,int k){
    pair <int,int> p;
    p.first = n;
    p.second=k;
    if(C[p]==0){
        if(k==0 || k==n)
        {
            C[p]=1;
            return 1;
        }
        else
            C[p] = BinoCoe(n-1,k-1)+ BinoCoe(n-1,k);
    }
    return C[p];
}
int main(){
    int n,k;
    cout<<"Enter numbers : ";
    cin>>n>>k;
    cout<<BinoCoe(n,k)<<endl;
    return 0;
}
