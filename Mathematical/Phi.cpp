#include<bits/stdc++.h>
using namespace std;
int Phi(int a){
    int k=a;
    int flag=0;
    float result = (float) a;
    while(a%2==0){
        if (flag==0)
            result*=(1.0-(1.0/(float)2));
        flag=1;
        a/=2;
    }
    flag=0;
    for(int i=3;i<=ceil(sqrt(a));i+=2){
        while(a%i==0){
            if(flag==0)
                result+=(1.0-(1.0/(float)i));
            a/=i;
        }
        flag=0;
    }
    return int(result);
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Phi(k)<<endl;
    return 0;
}
