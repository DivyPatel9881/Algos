#include<bits/stdc++.h>
using namespace std;
map <pair<int,int>,int> C;
int BinoMod(int n,int k,int mod){
    pair <int,int> p;
    p.first = n;
    p.second=k;
    if(C[p]==0){
        if(k==0||k==n)
            C[p]=(1%mod);
        else
            C[p] = (BinoMod(n-1,k,mod) +BinoMod(n-1,k-1,mod))%mod;
    }
    return C[p];
}
int main(){
    int n,k,p;
    cout<<"Enter numbers : ";
    cin>>n>>k>>p;
    cout<<BinoMod(n,k,p)<<endl;
    return 0;
}
