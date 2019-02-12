#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int Reduce(char arr[],int a){
    int mod=0;
    for(int i=0;i<strlen(arr);i++)
        mod = (mod*10 + (arr[i] - '0'))%a;
    return mod;
}
int GCDLarge(int a,char arr[]){
    int num = Reduce(arr,a);
    return GCD(a,num);
}
int main(){
    int a;
    char arr[100] = "1234567891011121314151617181920212223242526272829";
    cout<<"Enter a number : ";
    cin>>a;
    cout<<GCDLarge(a,arr)<<endl;
    return 0;
}
