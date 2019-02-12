#include<bits/stdc++.h>
using namespace std;
int MaxNum(int m,int n){
    int sum=0;
    for(int i=m;i<=m+n-1;i++)
        sum+=pow(2,i);
    return sum;
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout<<MaxNum(a,b)<<endl;
    return 0;
}
