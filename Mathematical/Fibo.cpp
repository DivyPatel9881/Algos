#include<bits/stdc++.h>
using namespace std;
map <int,int> f;
int fibo(int a){
    if(f[a]==0)
    {
        if(a==0)
            f[a]=0;
        else if(a==1)
            f[a]=1;
        else
            f[a] = fibo(a-1)+fibo(a-2);
    }
    return f[a];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<fibo(k)<<endl;
    return 0;
}
