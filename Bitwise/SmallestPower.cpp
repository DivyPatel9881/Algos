//Smallest power of 2 greater than or equal to n
#include<iostream>
using namespace std;
int SmallestPower(int n){
    int c=0;
    int k=n;
    while(k){
        k/=2;
        c++;
    }
    if(!(n&(n-1)))
        return c-1;
    return c;
}
int main(){
    int n;
    cin>>n;
    cout<<SmallestPower(n)<<endl;
    return 0;
}
