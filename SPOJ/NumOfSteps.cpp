#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int x,y;
    for(int i=0;i<t;i++){
        cin>>x>>y;
        if(x==y){
            if(x%2==0)
                cout<<2*x<<endl;
            else
                cout<<2*x-1<<endl;
        }
        else if(x-y==2){
            if(y%2==0)
                cout<<x+y<<endl;
            else if(y%2!=0)
                cout<<x+y-1<<endl;
        }
        else
            cout<<"No Number"<<endl;
    }
    return 0;
}
