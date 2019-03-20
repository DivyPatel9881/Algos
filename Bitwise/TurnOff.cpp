//Turn off a particular bit in a number.
#include<iostream>
using namespace std;
int TurnOff(int a,int n){
    return a^(1<<(n-1));
}
int main(){
    int a;
    cin>>a;
    int n;
    cin>>n;
    cout<<TurnOff(a,n)<<endl;
    return 0;
}
