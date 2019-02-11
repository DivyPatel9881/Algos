#include<bits/stdc++.h>
using namespace std;
int Mul3_5(int a){
    return (a+(a<<1)+(a>>1));
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<Mul3_5(a)<<endl;
    return 0;
}
