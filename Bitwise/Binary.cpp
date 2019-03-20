//Binary representation of number.
#include<iostream>
using namespace std;
char * IntToBinary(int a){
    char *ptr=new char[10];
    int i=0;
    int k=a;
    while(k){
        ptr[i++]=char((k%2)+48);
        k/=2;
    }
    char *ptr2=new char[10];
    cout<<i<<endl;
    for(int j=0;j<i;j++)
        ptr2[j]=ptr[i-j-1];
    ptr2[i]='\0';
    return ptr2;
}
int main(){
    int a;
    cin>>a;
    char *ptr=IntToBinary(a);
    cout<<ptr<<endl;
    return 0;
}
