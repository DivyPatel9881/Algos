//Feynman
#include<iostream>
using namespace std;
int Feynaman(int n){
    return n*(n+1)*(2*n+1)/6;
}
int main(){
    int n;
    cin>>n;
    if(n==0)
        return 0;
    do{
        cout<<Feynaman(n)<<endl;
        cin>>n;
    }while(n!=0);
    return 0;
}
