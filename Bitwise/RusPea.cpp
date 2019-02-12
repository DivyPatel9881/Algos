#include<iostream>
using namespace std;
int Mul(int a,int b){
    int sum=0;
    while(b){
        if(b%2!=0)
          sum+=a;
        b/=2;
        a<<=1;
    }
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter a number : ";
    cin>>a>>b;
    cout<<Mul(a,b)<<endl;
    return 0;
}
