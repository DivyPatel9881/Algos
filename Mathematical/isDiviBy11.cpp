#include<bits/stdc++.h>
using namespace std;
int Int(char a){
    return a-'0';
}
int Abs(int i){
    if(i<0)
        return -i;
    return i;
}
bool isDiviBy11(char arr[]){
    int sum1=0,sum2=0;
    for(int i=0;i<strlen(arr);i++){
        if(i%2==0)
            sum1+=Int(arr[i]);
        else if(i%2!=0)
            sum2+=Int(arr[i]);
    }
    int diff = sum1-sum2;
    int abs_diff = Abs(diff);
    if(abs_diff%11==0)
        return true;
    return false;
}
int main(){
    char arr[100];
    cout<<"Enter large number : ";
    cin>>arr;
    cout<<isDiviBy11(arr)<<endl;
    return 0;
}
