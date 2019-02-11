#include<bits/stdc++.h>
using namespace std;
int CountMinFlips(int a,int b){
    int x = a^b;
    int l = x;
    int i=0;
    while(l)
    {
        if((l&1))
            i++;
        l>>=1;
    }
    return i;
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    cout<<CountMinFlips(a,b)<<endl;
    return 0;
}
