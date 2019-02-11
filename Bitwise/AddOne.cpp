#include<bits/stdc++.h>
using namespace std;
int AddOne(int a){
    int k=1;
    while((a&k)){
        a = a^k;
        k=k<<1;
    }
    a = a|k;
    return a;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<AddOne(a)<<endl;
    return 0;
}
