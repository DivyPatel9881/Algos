//Number Steps
#include<iostream>
using namespace std;
int Steps(int x,int y){
    if(x==y || x-y==2){
        if(x%2==0)
            return x+y;
        else
            return x+y-1;
    }
    else
        return -1;
}
int main(){
    int n;
    int x,y;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x>>y;
        int k=Steps(x,y);
        if(k==-1)
            cout<<"No Number"<<endl;
        else
            cout<<k<<endl;
    }
    return 0;
}
