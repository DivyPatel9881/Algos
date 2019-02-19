#include<bits/stdc++.h>
using namespace std;
int main(){
    int a,b,c;
    while(true){
        cin>>a>>b>>c;
        if(a==0 && b==0 && c==0)
            break;
        else if(b-a == c-b)
        {
            int diff = b-a;
            cout<<"AP "<<c+diff<<endl;
        }
        else if(b/a == c/b)
        {
            int rat= b/a;
            cout<<"GP "<<c*rat<<endl;
        }
    }
}
