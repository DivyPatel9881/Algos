//Multiply two numbers by russian peasant theorem.
#include<iostream>
using namespace std;
int Mul(int a,int b){
    int res=0;
    while(b){
        if(b%2!=0)
            res+=a;
        a<<=1;
        b>>=1;
    }
    return res;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Mul(a,b)<<endl;
    return 0;
}
