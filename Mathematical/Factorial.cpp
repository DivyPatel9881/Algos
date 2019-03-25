//Program for Factorial of a number.
#include<bits/stdc++.h>
using namespace std;
map<int,int> F;
int Factorial(int n){
    int k=F[n];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            F[n]=1;
            return 1;
        }
        else{
            F[n]=n*Factorial(n-1);
            return F[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Factorial(n)<<endl;
    return 0;
}
