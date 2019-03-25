//Count the number whose sum and xor are equal.
#include<iostream>
#include<cmath>
using namespace std;
int CountPos(int a){
    int c1=0;
    int c2=0;
    int k=a;
    while(k){
        k=k&(k-1);
        c1++;
    }
    k=a;
    while(k){
        k>>=1;
        c2++;
    }
    return int(pow(2,c2-c1));
}
int main(){
    int n;
    cin>>n;
    cout<<CountPos(n)<<endl;
    return 0;
}

