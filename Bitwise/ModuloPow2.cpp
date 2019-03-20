//Modulo of a number by power of 2.
#include<iostream>
using namespace std;
int ModuloPow2(int a,int k)
{
    return a&(k-1);
}
int main(){
    int a;
    cin>>a;
    int k;
    cin>>k;
    cout<<ModuloPow2(a,k)<<endl;
    return 0;
}
