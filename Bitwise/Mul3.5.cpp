//Multiply a given Integer with 3.5.
#include<iostream>
using namespace std;
int Mul3_5(int a){
    return (a<<1)+(a)+(a>>1);
}
int main(){
    int a;
    cin>>a;
    int b=Mul3_5(a);
    cout<<b<<endl;
    return 0;
}
