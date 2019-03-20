//Checking a number is divisible by 4 or not.
#include<iostream>
using namespace std;
bool isDivisibleBy4(int a){
    return !((a&1)|(a&2));
}
int main(){
    int a;
    cin>>a;
    cout<<isDivisibleBy4(a)<<endl;
    return 0;
}
