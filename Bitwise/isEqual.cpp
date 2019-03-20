//Check whether given numbers are equal.
#include<iostream>
using namespace std;
bool isEqual(int a,int b){
    return !(a^b);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<isEqual(a,b)<<endl;
    return 0;
}
