//To find largest x such that p^x divides n! where p is a prime number.
#include<bits/stdc++.h>
using namespace std;
map<int,int> F;
int LargestX(int n,int p){
    int sum=0;
    int k=0;
    int i=1;
    do{
        k=floor(n/pow(p,i++));
        sum+=k;
    }while(k!=0);
    return sum;
}
int main(){
    int n,p;
    cin>>n>>p;
    cout<<LargestX(n,p)<<endl;
    return 0;
}
