#include<bits/stdc++.h>
using namespace std;
int Mul10(int a){
    return ((a<<3)+(a<<1));
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<Mul10(a)<<endl;
    return 0;
}
