//Factorial
#include<bits/stdc++.h>
using namespace std;
int LastN0Digs(int n){
    int sum=0;
    int k=1;
    for(int i=1;k!=0;i++)
    {
        k = n/int(ceil(pow(5,i)));
        sum+=k;
    }
    return sum;
}
int main(){
    int t;
    cin>>t;
    int n;
    for(int i=0;i<t;i++)
    {
        cin>>n;
        cout<<LastN0Digs(n)<<endl;
    }
    return 0;
}
