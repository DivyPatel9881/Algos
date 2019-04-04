//The last digit
#include<iostream>
using namespace std;
int LastDig(int a,unsigned long b){
    int res=1;
    if(a==0)
        return 0;
    if(b==0)
        return 1;
    while(b){
        if(b%2==1)
        {
            res*=a;
            res%=10;
            b--;
        }
        if(b){
            a*=a;
            a%=10;
            b/=2;
        }
    }
    return res;
}
int main(){
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int a;
        unsigned long b;
        cin>>a>>b;
        cout<<LastDig(a,b)<<endl;
    }
    return 0;
}
