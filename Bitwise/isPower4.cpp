#include<iostream>
using namespace std;
int isPower4(int a){
    int l=a;
    int k=1;
    int i=0;
    while(!(l&k)){
        k<<=1;
        i++;
    }
    l=a^k;
    if((l==0) && ((i%2)==0))
        return 1;
    return 0;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    cout<<isPower4(a)<<endl;
    return 0;
}
