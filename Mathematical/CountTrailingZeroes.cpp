//Counting Trailing zeroes in a factorial.
#include<bits/stdc++.h>
using namespace std;
int CountTrailingZeroes(int n){
    int sum=0;
    int k=0;
    int i=1;
    do{
        k=floor(n/pow(5,i++));
        sum+=k;
    }while(k!=0);
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<CountTrailingZeroes(n)<<endl;
    return 0;
}
