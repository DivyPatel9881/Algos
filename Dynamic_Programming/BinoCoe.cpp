#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> C;
int BinoCoe(int n,int r){
    pair <int,int>p;
    p.first = n;
    p.second = r;
    if(C[p]!=0)
        return C[p];
    else{
        if(r==0||r==n)
            C[p] = 1;
        else
            C[p] = BinoCoe(n-1,r) + BinoCoe(n-1,r-1);
    }
    return C[p];
}
int main(){
    int n,r;
    cout<<"Enter numbers : ";
    cin>>n>>r;
    cout<<BinoCoe(n,r)<<endl;
    return 0;
}
