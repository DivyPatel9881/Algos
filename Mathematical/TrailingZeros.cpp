#include<bits/stdc++.h>
using namespace std;
int TrailZeros(int k){
    int j=k/5;
    int sum=0;
    while(j)
    {
        sum+=j;
        j/=5;
    }
    return sum;
}
int main(){
    int k;
    cout<<"Enter a number :";
    cin>>k;
    cout<<TrailZeros(k)<<endl;
    return 0;
}
