//Swap three variables without using temp variable.
#include<iostream>
using namespace std;
void Swap(int &a,int &b,int &c){
    a=a^b^c;
    b=a^b^c;
    c=a^b^c;
    a=a^b^c;
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<a<<" "<<b<<" "<<c<<endl;
    Swap(a,b,c);
    cout<<a<<" "<<b<<" "<<c<<endl;
    return 0;
}
