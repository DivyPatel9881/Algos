//GCD and fibonacci numbers.
#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int Fibo(int n){
    int k=m[n];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            m[0]=0;
            return 0;
        }
        else if(n==1)
        {
            m[1]=1;
            return 1;
        }
        else{
            m[n] = Fibo(n-1)+Fibo(n-2);
            return m[n];
        }
    }
}
int GCDFibo(int a,int b){
    return Fibo(GCD(a,b));
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<GCDFibo(a,b)<<endl;
    return 0;
}
