//Smallest number divisible by first n natural numbers.
#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int LCM(int a,int b){
    return a*b/GCD(a,b);
}
int SmallestNumberDivi(int x){
    int k=1;
    for(int i=2;i<=x;i++)
        k=LCM(k,i);
    return k;
}
int main(){
    int n;
    cin>>n;
    cout<<SmallestNumberDivi(n)<<endl;
    return 0;
}
