//GCD of two numbers which are x repeating by n1 and n2 times.
#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
pair<int,int> GCDOfRepeat(int a,int n1,int n2){
    pair<int,int>p;
    p.first=a;
    p.second=GCD(n1,n2);
    return p;
}
int main(){
    int a,n1,n2;
    cin>>a>>n1>>n2;
    pair<int,int>p=GCDOfRepeat(a,n1,n2);
    cout<<p.first<<" "<<p.second<<endl;
    return 0;
}
