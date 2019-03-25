//nCr coefficients with mod p.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> C;
int nCr(int n,int r,int p){
    pair<int,int> pa;
    pa.first=n;
    pa.second=r;
    int k=C[pa];
    if(k!=0)
        return k;
    else{
        if(n==0||r==0||n==r)
        {
            C[pa]=1%p;
            return 1%p;
        }
        else if(r==1)
        {
            C[pa]=n%p;
            return n%p;
        }
        else{
            C[pa] = ((nCr(n-1,r-1,p)%p)+(nCr(n-1,r,p)%p))%p;
            return C[pa];
        }
    }
}
int main(){
    int n,r;
    cin>>n>>r;
    int p;
    cin>>p;
    cout<<nCr(n,r,p)<<endl;
    return 0;
}
