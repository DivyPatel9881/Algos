#include<bits/stdc++.h>
using namespace std;
int MinNum(int a,int b){
    int sum=0;
    for(int i=0;i<=b-2;i++)
        sum+=pow(2,i);
    return (sum+pow(2,a+b-1));
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout<<MinNum(a,b)<<endl;
    return 0;
}
