//Add two numbers without using addition operator.
#include<iostream>
using namespace std;
int Add(int a,int b){
    int res;
    int carry;
    while(b){
        carry=a&b;
        a=a^b;
        b=carry<<1;
    }
    return a;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<Add(a,b)<<endl;
    return 0;
}
