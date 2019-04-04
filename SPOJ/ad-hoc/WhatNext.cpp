//What's next
#include<iostream>
using namespace std;
int main(){
    int i,j,k;
    cin>>i>>j>>k;
    if(i==0&&j==0&k==0)
        return 0;
    do{
        if(j-i==k-j){
            int diff=j-i;
            cout<<"AP "<<k+diff<<endl;
        }
        else{
            int ratio=j/i;
            cout<<"GP "<<ratio*k<<endl;
        }
        cin>>i>>j>>k;
    }while(i!=0 || j!=0 || k!=0);
    return 0;
}
