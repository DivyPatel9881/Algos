//Efficient multiplication by 7.
#include<iostream>
using namespace std;
int Mul7(int a){
    return (a<<3)-a;
}
int main(){
    int a;
    cin>>a;
    cout<<Mul7(a)<<endl;
    return 0;
}
