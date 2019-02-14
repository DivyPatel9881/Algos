#include<bits/stdc++.h>
using namespace std;
map <int ,int> f;
int Fibo(int a){
    if(f[a]!=0)
        return f[a];
    else{
        if(a==1)
            f[a]=0;
        else if(a==2)
            f[a]=1;
        else
            f[a] = Fibo(a-1)+Fibo(a-2);
    }
    return f[a];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Fibo(k)<<endl;
    return 0;
}
