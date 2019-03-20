//Count number of bits to be flipped to convert A from B.
#include<iostream>
using namespace std;
int CountFlips(int a,int b){
    int c=a^b;
    int Count=0;
    while(c)
    {
        c=c&(c-1);
        Count++;
    }
    return Count;
}
int main(){
    int a,b;
    cin>>a>>b;
    cout<<CountFlips(a,b)<<endl;
    return 0;
}
