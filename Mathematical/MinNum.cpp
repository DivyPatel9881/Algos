#include<bits/stdc++.h>
using namespace std;
int MinNum(int a){
    int k=a;
    int Max = 0;
    while(a%2==0)
    {
        a/=2;
        if(Max < 2)
            Max=a;
    }
    for(int i=3;i<=ceil(sqrt(a));i+=2){
        while(a%i==0)
        {
            a/=i;
            if(Max<i)
                Max=i;
        }
    }
    if(a!=1){
        if(Max<a)
            Max=a;
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<MinNum(k)<<endl;
    return 0;
}
