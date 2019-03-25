//nCr coefficients.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> C;
int nCr(int n,int r){
    pair<int,int> p;
    p.first=n;
    p.second=r;
    int k=C[p];
    if(k!=0)
        return k;
    else{
        if(r==1)
        {
            C[p]=n;
            return n;
        }
        else if(n==r||n==0||r==0)
        {
            C[p]=1;
            return 1;
        }
        else{
            C[p]=nCr(n-1,r-1)+nCr(n-1,r);
            return C[p];
        }
    }
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<nCr(n,r)<<endl;
    return 0;
}
