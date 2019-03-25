//Euler Totient Function.
#include<bits/stdc++.h>
using namespace std;
int EulerTotient(int n){
    vector <int> v;
    for(int i=2;i<=floor(sqrt(n));i++){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1)
        v.push_back(n);
    int res=1;
    for(int i=0;i<v.size();i++)
        res*=(v[i]-1);
    return res;
}
int main(){
    int n;
    cin>>n;
    cout<<EulerTotient(n)<<endl;
    return 0;
}
