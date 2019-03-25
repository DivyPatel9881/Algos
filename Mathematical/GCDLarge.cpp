#include<iostream>
#include<cstring>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int GCDLarge(int a,char b[]){
    int b1=0;
    for(int i=0;i<strlen(b);i++)
        b1 = (b1*10+b[i]-'0')%a;
    return GCD(a,b1);
}
int main(){
    int a;
    char b[100];
    cin>>b;
    cin>>a;
    cout<<GCDLarge(a,b)<<endl;
    return 0;
}
