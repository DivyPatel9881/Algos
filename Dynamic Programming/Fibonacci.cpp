//Program for fibonacci numbers.
#include<bits/stdc++.h>
using namespace std;
map<int,int> F;
int Fibo(int n){
    int k=F[n];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            F[0]=0;
            return 0;
        }
        else if(n==1)
        {
            F[1]=1;
            return 1;
        }
        else{
            F[n]=Fibo(n-1)+Fibo(n-2);
            return F[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Fibo(n)<<endl;
    return 0;
}
