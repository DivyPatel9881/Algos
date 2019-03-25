//To find whether a given number is power of two.
#include<iostream>
using namespace std;
bool isPow2(int a){
    int k=a&(a-1);
    if(k)
        return false;
    return true;
}
int main(){
    int a;
    cin>>a;
    cout<<isPow2(a)<<endl;
    return 0;
}
