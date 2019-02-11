#include<iostream>
using namespace std;
int Pow2(int a){
    if(!(a&(a-1)))
        return 1;
    return 0;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Pow2(k)<<endl;
    return 0;
}
