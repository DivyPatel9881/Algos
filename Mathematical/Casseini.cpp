//Casseini's identity.
#include<iostream>
using namespace std;
int Casseini(int n){
    if(n%2==1)
        return -1;
    return 1;
}
int main(){
    int n;
    cin>>n;
    cout<<Casseini(n)<<endl;
    return 0;
}
