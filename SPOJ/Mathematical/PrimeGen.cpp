//Prime Generator
#include<bits/stdc++.h>
using namespace std;
void printPrimeNums(int l,int h){
    if(l==1){
        cout<<2<<endl;
        l=3;
    }
    else if(l==2)
    {
        cout<<2<<endl;
        l=3;
    }
    for(int i=l;i<=h;i++){
        int flag=0;
        for(int j=2;j<=floor(sqrt(i));j++){
            if(i%j==0)
            {
                flag=1;
                break;
            }
        }
        if(flag==0)
            cout<<i<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    int l,h;
    for(int i=0;i<t;i++)
    {
        cin>>l>>h;
        printPrimeNums(l,h);
        cout<<endl;
    }
    return 0;
}
