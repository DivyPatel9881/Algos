#include<iostream>
using namespace std;
int ModuloPow2(int a,int b){
    return a&(b-1);
}
int main(){
    cout<<"Enter numbers : ";
    int a,b;
    cin>>a>>b;
    cout<<ModuloPow2(a,b)<<endl;
    return 0;
}
