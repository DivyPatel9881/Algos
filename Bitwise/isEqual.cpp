#include<bits/stdc++.h>
using namespace std;
bool isEqual(int a,int b){
    return !(bool)(a^b);
}
int main(){
    int a,b;
    cout<<"Enter a number : ";
    cin>>a>>b;
    cout<<isEqual(a,b)<<endl;
    return 0;
}
