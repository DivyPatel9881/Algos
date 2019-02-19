#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    int a;
    for(int i=0;i<t;i++){
        cin>>a;
        int k=0;
        int j=1;
        int l=1;
        while(l){
            l=a/pow(5,j++);
            k+=l;
        }
        cout<<k<<endl;
    }
}
