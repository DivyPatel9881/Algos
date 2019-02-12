#include<bits/stdc++.h>
using namespace std;
int XOR(int a,int b){
    return (~a|~b) & (a|b);
}
int main(){
    int a,b;
    cout<<"Enter a number : ";
    cin>>a>>b;
    cout<<XOR(a,b)<<endl;
    return 0;
}
