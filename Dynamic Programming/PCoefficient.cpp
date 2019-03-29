//Permutation Coefficient.
#include<bits/stdc++.h>
using namespace std;
map<int,int> F;
int P(int n,int r){
    F[0]=1;
    for(int i=1;i<=n;i++)
        F[i]=i*F[i-1];
    return F[n]/F[n-r];
}
int main(){
    int n,r;
    cin>>n>>r;
    cout<<P(n,r)<<endl;
    return 0;
}

