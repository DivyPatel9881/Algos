//Calculate XOR of counts of 0s and 1s.
#include<iostream>
using namespace std;
int XORCount(int a){
    int c1=0;
    int c2=0;
    int k=a;
    while(k){
        k=k&(k-1);
        c1++;
    }
    k=a;
    while(k){
        k>>=1;
        c2++;
    }
    return c1^(c2-c1);
}
int main(){
    int n;
    cin>>n;
    cout<<XORCount(n)<<endl;
    return 0;
}
