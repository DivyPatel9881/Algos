//Find Catalan numbers.
#include<bits/stdc++.h>
using namespace std;
map<int,int> C;
int Catalan(int n){
    int k=C[n];
    if(k!=0)
        return k;
    else{
        if(n<=1){
            C[n]=1;
            return 1;
        }
        else{
            for(int i=0;i<n;i++)
                C[n] += Catalan(i)*Catalan(n-i-1);
            return C[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Catalan(n)<<endl;
    return 0;
}
