#include<bits/stdc++.h>
using namespace std;
bool isPerfectSquare(int a){
    return (sqrt(a)*sqrt(a) == a);
}
bool isFibo(int a){
    return (isPerfectSquare((5*a*a)+4) || isPerfectSquare((5*a*a)-4));
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<isFibo(k)<<endl;
    return 0;
}
