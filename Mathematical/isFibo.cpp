//Check whether a number belongs to fibonacci series or not.
#include<iostream>
#include<cmath>
using namespace std;
bool isPerfectSquare(int n){
    int k=floor(sqrt(n));
    return k*k==n;
}
bool isFibo(int n){
    return isPerfectSquare(5*n*n+4) || isPerfectSquare(5*n*n-4);
}
int main(){
    int n;
    cin>>n;
    cout<<isFibo(n)<<endl;
    return 0;
}
