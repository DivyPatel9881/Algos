//Multiply a number by 10.
#include<iostream>
using namespace std;
int Mul10(int a){
    return (a<<3)+(a<<1);
}
int main(){
    int a;
    cin>>a;
    cout<<Mul10(a)<<endl;
    return 0;
}
