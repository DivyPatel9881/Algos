//Check if a large number is divisible by 3 or not.
#include<bits/stdc++.h>
using namespace std;
int isDivisibleBy3(char arr[]){
    int sum=0;
    for(int i=0;i<strlen(arr);i++)
        sum+=(arr[i]-'0');
    if(sum%3==0)
        return true;
    return false;
}
int main(){
    char str[100];
    cin>>str;
    cout<<isDivisibleBy3(str)<<endl;
    return 0;
}
