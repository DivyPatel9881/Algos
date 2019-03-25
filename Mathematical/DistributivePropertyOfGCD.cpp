//Distributive property.
//To compute GCD(LCM(a,b),LCM(a,c))
#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int Dist(int a,int b,int c){
    int gcd = GCD(b,c);
    return (a*gcd)/GCD(a,gcd);
}
int main(){
    int a,b,c;
    cin>>a>>b>>c;
    cout<<Dist(a,b,c)<<endl;
    return 0;
}
