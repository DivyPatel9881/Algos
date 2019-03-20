//Add 1 to a number.
#include<iostream>
using namespace std;
int AddOne(int a){
    int t=1;
    int k=1;
    int c=0;
    while(t){
        t=a&k;
        k=k<<1;
        c++;
    }
    return a^((1<<c)-1);
}
int main(){
    int a;
    cin>>a;
    int b=AddOne(a);
    cout<<b<<endl;
    return 0;
}
