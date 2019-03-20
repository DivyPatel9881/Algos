//Detect if twp integers have opposite signs.
#include<iostream>
using namespace std;
bool isOpposite(int a,int b){
    return ((a^b)<0);
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<isOpposite(a,b)<<endl;
    return 0;
}
