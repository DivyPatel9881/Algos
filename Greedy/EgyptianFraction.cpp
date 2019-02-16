#include<bits/stdc++.h>
using namespace std;
int EgyptianFraction(int a,int b){
    if(a==0)
        return 0;
    else if(a==1)
    {
        cout<<a<<" "<<b<<endl;
        return 0;
    }
    else if(a!=0 && a!=1)
    {
        int k = ceil(float(b)/float(a));
        a = (a*k) - b;
        b = b*k;
        cout<<1<<" "<<k<<endl;
        return EgyptianFraction(a,b);
    }
}
int main(){
    int a,b;
    cout<<"Enter numbers : ";
    cin>>a>>b;
    EgyptianFraction(a,b);
    return 0;
}
