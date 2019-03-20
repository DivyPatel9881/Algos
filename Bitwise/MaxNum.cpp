//Find Largest number with n bits set and m bits unset.
#include<iostream>
#include<cmath>
using namespace std;
int MaxNum(int m,int n){
    int res=0;
    for(int i=m;i<m+n;i++)
        res+=int(pow(2,i));
    return res;
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<MaxNum(m,n)<<endl;
    return 0;
}
