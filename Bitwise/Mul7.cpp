#include<bits/stdc++.h>
using namespace std;
int Mul7(int a){
    return ((a<<3)-a);
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Mul7(k)<<endl;
    return 0;
}
