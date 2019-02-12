#include<bits/stdc++.h>
using namespace std;
int PosOff(int k,int p){
    int l=1<<(p-1);
    return (k^l);
}
int main(){
    int k,p;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<"Enter bit position : ";
    cin>>p;
    cout<<PosOff(k,p)<<endl;
    return 0;
}
