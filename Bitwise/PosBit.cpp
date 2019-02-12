#include<bits/stdc++.h>
using namespace std;
int Pos(int a){
    int i=1;
    while((a&1)==0){
        a>>=1;
        i++;
    }
    return i;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Pos(k)<<endl;
    return 0;
}
