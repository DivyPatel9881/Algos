//XOR of two numbers of without using xor operation.
#include <iostream>
using namespace std;
int XOR(int n1,int n2){
    return (n1|n2)&(~n1|~n2);
}
int main(){
    int n1,n2;
    cin>>n1>>n2;
    cout<<XOR(n1,n2)<<endl;
    return 0;
}
