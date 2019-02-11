#include<iostream>
using namespace std;
int CountSet(int a){
    int l=a;
    int i=0;
    while(l){
        if((l&1))
            i++;
        l>>=1;
    }
    return i;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<CountSet(k)<<endl;
    return 0;
}
