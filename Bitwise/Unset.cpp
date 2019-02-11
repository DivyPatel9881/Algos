#include<iostream>
using namespace std;
int Unset(int a){
    return a&(a-1);
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<Unset(a)<<endl;
    return 0;
}
