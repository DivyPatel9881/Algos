#include<bits/stdc++.h>
using namespace std;
int isOpposite(int a,int b){
    if((a^b)>=0)
        return 0;
    return 1;
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout<<isOpposite(a,b)<<endl;
    return 0;
}
