#include<bits/stdc++.h>
using namespace std;
map<int,int > m;
int Factorial(int a){
    if(m[a]!=0)
        return m[a];
    else if(a==1)
    {
        m[a]=1;
        return m[a];
    }
    else
    {
        m[a] = Factorial(a-1) * a;
        return m[a];
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Factorial(k)<<endl;
    return 0;
}
