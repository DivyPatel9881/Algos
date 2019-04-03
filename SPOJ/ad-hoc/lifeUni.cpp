//Life, the Universe, and Everything
#include<iostream>
using namespace std;
int main(){
    int i;
    cin>>i;
    if(i==42)
        return 0;
    else{
        do{
            cout<<i<<endl;
            cin>>i;
        }while(i!=42);
        return 0;
    }
}
