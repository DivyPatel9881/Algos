//Minimum number formed from m unset and n set bits.
#include<iostream>
#include<cmath>
using namespace std;
int MinNum(int a,int b){
    int res=0;
    for(int i=0;i<b-1;i++)
        res+=int(pow(2,i));
    res+=int(pow(2,a+b-1));
    return res;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<MinNum(m,n)<<endl;
    return 0;
}
