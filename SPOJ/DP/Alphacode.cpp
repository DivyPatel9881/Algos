//Alphacode
#include<bits/stdc++.h>
using namespace std;
map<int,int> NumPoss;
bool isValid(char a,char b){
    if(a=='0')
        return false;
    else{
        int k = ((a-'0')*10)+(b-'0');
        if(k<=26)
            return true;
        return false;
    }
}
int PossNumStr(char arr[],int n){
    int k = NumPoss[n];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            NumPoss[n] = 1;
            return 1;
        }
        else if(n<0)
            return 0;
        else if(n==1)
        {
            NumPoss[n] = PossNumStr(arr,0);
            return NumPoss[n];
        }
        else if(!isValid(arr[n-2],arr[n-1]))
        {
            NumPoss[n] = PossNumStr(arr,n-1);
            return NumPoss[n];
        }
        else if(arr[n-1]=='0')
        {
            NumPoss[n] = PossNumStr(arr,n-2);
            return NumPoss[n];
        }
        else if(isValid(arr[n-2],arr[n-1]))
        {
            NumPoss[n] = PossNumStr(arr,n-1)+PossNumStr(arr,n-2);
            return NumPoss[n];
        }
    }
}
int main(){
    do{
        char arr[6000];
        cin>>arr;
        getchar();
        if(!strcmp(arr,"0"))
            return 0;
        cout<<PossNumStr(arr,strlen(arr))<<endl;
        NumPoss.clear();
    }while(true);
}
