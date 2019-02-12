#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b){
    a= a^b;
    b=a^b;
    a=a^b;
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout<<a<<" "<<b<<endl;
    Swap(a,b);
    cout<<a<<" "<<b<<endl;
    return 0;
}
