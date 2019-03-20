//Count Set bits in a number.
#include<iostream>
using namespace std;
int CountSet(int a){
    int c=0;
    while(a){
        a=a&(a-1);
        c++;
    }
    return c;
}
int main(){
    int a;
    cin>>a;
    cout<<CountSet(a)<<endl;
    return 0;
}
