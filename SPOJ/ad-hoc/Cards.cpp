//Cards
#include<iostream>
#define MOD 1000007
#define L long long
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        L n;
        cin>>n;
        cout<<((3*n*(n+1)/2)-n)%MOD<<endl;
    }
    return 0;
}
