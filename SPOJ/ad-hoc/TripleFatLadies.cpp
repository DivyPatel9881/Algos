//Triple Fat ladies.
#include<bits/stdc++.h>
using namespace std;
void NthCube(long long n){
    if(n%4==0){
        long long k = n/4-1;
        if(k==0)
            cout<<942<<endl;
        else
            cout<<k<<942<<endl;
    }
    else if(n%4==1){
        long long k = n/4;
        if(k==0)
            cout<<192<<endl;
        else
            cout<<k<<192<<endl;
    }
    else if(n%4==2){
        long long k = n/4;
        if(k==0)
            cout<<442<<endl;
        else
            cout<<k<<442<<endl;
    }
    else if(n%4==3){
        long long k = n/4;
        if(k==0)
            cout<<692<<endl;
        else
            cout<<k<<692<<endl;
    }
}
int main(){
    int t;
    long long n;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        NthCube(n);
    }
    return 0;
}
