#include<iostream>
using namespace std;
int Num(int a,int k){
    int j = k/a;
    int sum=0;
    while(j){
        sum+=j;
        j/=a;
    }
    return sum;
}
int main(){
    int a,k;
    cout<<"Enter numbers : ";
    cin>>a>>k;
    cout<<Num(a,k);
    return 0;
}
