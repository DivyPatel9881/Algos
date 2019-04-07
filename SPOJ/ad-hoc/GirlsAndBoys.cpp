// Girls and Boys
#include<bits/stdc++.h>
using namespace std;
float Min(float a,float b){
    return a<=b?a:b;
}
float Max(float a,float b){
    return a>b?a:b;
}
int main(){
    float a,b;
    cin>>a>>b;
    while(a!=-1 && b!=-1){
        float m = Min(a,b);
        float M = Max(a,b);
        if(m==0)
            cout<<M<<endl;
        else
            cout<<ceil(M/(m+1))<<endl;
        cin>>a>>b;
    }
    return 0;
}
