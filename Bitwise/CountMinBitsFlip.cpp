//Check minimum number of bits to flip to get desired XOR.
#include<iostream>
using namespace std;
int MinCount(int n,int a,int b,int c){
    int res = a^b;
    int k=c;
    int Count=0;
    for(int i=0;i<n;i++){
        int n1 = k%2;
        int n2 = res%2;
        if(n1!=n2)
            Count++;
        res/=2;
        k/=2;
    }
    return Count;
}
int main(){
    int a,b,c;
    int n;
    cin>>n;
    cin>>a>>b>>c;
    cout<<MinCount(n,a,b,c)<<endl;
    return 0;
}
