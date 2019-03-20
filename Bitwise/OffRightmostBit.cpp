//Turn off the rightmost set bit.
#include<iostream>
using namespace std;
int OffRightmostBit(int a){
    return a&(a-1);
}
int main(){
    int a;
    cin>>a;
    int b=OffRightmostBit(a);
    cout<<b<<endl;
    return 0;
}
