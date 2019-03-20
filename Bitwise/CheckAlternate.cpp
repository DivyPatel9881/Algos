//Check whether given number has set bits in alternate fashion.
#include<iostream>
using namespace std;
bool CheckAlternate(int a){
    int k=a;
    int prev=k%2;
    k/=2;
    while(k){
        int now = k%2;
        k/=2;
        if(prev==now)
            return false;
        prev=now;
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    cout<<CheckAlternate(n)<<endl;
    return 0;
}
