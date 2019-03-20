//Checking whether a number is a power of 4.
#include<iostream>
using namespace std;
bool isPowerOf4(int a){
    if(a&(a-1))
        return false;
    int t=0;
    int k=1;
    int c=0;
    while(!t){
        t=a&k;
        k<<=1;
        c++;
    }
    if(c%2==0)
        return false;
    return true;
}
int main(){
    int a;
    cin>>a;
    cout<<isPowerOf4(a)<<endl;
    return 0;
}
