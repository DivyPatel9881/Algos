#include<bits/stdc++.h>
using namespace std;
char * DigToBinary(int a){
    char arr1[100];
    int in=0;
    while(a){
        arr1[in++] = char((a%2)+48);
        a/=2;
    }
    arr1[in]='\0';
    char *arr2=new char [100];
    for(int i=in-1;i>=0;i--)
        arr2[in-1-i] = arr1[i];
    arr2[in]='\0';
    return arr2;
}
int main(){
    int a;
    cout<<"Enter a number : ";
    cin>>a;
    char *arr;
    arr = DigToBinary(a);
    cout<<arr<<endl;
    return 0;
}
