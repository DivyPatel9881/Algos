#include<bits/stdc++.h>
using namespace std;
int Int(char a){
    return a-'0';
}
bool isDiviBy3(char arr[]){
    int sum=0;
    for(int i=0;i<strlen(arr);i++)
        sum+=Int(arr[i]);
    if(sum%3==0)
        return true;
    return false;
}
int main(){
    char arr[100];
    cout<<"Enter large number : ";
    cin>>arr;
    cout<<isDiviBy3(arr)<<endl;
    return 0;
}
