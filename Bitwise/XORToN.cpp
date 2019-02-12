#include<bits/stdc++.h>
using namespace std;
int XORToN(int n){
    if(n%4==0)
        return n;
    else if(n%4==1)
        return 1;
    else if(n%4==2)
        return n+1;
    else
        return 0;
}
int main(){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    cout<<XORToN(n)<<endl;
    return 0;
}
