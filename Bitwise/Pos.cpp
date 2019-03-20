//Find the position of the only set bit.
#include<iostream>
using namespace std;
int Pos(int a){
    int k=a;
    int c=0;
    while(k)
    {
        c++;
        if(k&1==1)
            return c;
        k>>=1;
    }
    return c;
}
int main(){
    int a;
    cin>>a;
    cout<<Pos(a)<<endl;
    return 0;
}
