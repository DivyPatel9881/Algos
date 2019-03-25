//Program for fibonacci numbers.
#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int Fibo(int n){
    int k=m[n];
    if(k!=0){
        return k;
    }
    else{
        if(n==0){
            m[0]=0;
            return 0;
        }
        else if(n==1){
            m[1]=1;
            return 1;
        }
        else{
            m[n]=Fibo(n-1)+Fibo(n-2);
            return m[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Fibo(n)<<endl;
    return 0;
}
