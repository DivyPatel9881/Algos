//Check whether a large number is Divisible by 11.
#include<bits/stdc++.h>
using namespace std;
int isDivisibleBy11(char arr[]){
    int sum1=0;
    int sum2=0;
    for(int i=0;i<strlen(arr);i++){
        if(i%2==0)
            sum1+=arr[i]-'0';
        else
            sum2+=arr[i]-'0';
    }
    if((sum1-sum2)%11==0)
        return true;
    return false;
}
int main(){
    char arr[100];
    cin>>arr;
    cout<<isDivisibleBy11(arr)<<endl;
    return 0;
}
