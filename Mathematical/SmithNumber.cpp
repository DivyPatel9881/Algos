//To find whether a number is Smith number or not.
#include<bits/stdc++.h>
using namespace std;
int SumOfDigits(int a){
    int k=a;
    int sum=0;
    while(k){
        sum+=(k%10);
        k/=10;
    }
    return sum;
}
int isSmith(int n){
    vector <int>v;
    int k=n;
    for(int i=2;i<=floor(sqrt(n));i++)
    {
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1)
        v.push_back(n);
    int sum=0;
    for(int i=0;i<v.size();i++)
        sum+=SumOfDigits(v[i]);
    return (sum==SumOfDigits(k));
}
int main(){
    int n;
    cin>>n;
    cout<<isSmith(n)<<endl;
    return 0;
}
