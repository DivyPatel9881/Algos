//Swap two numbers without using temp variable.
#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    a=a^b;
    b=a^b;
    a=a^b;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
