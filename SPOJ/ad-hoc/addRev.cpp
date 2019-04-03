//Adding Reversed Numbers
#include<bits/stdc++.h>
using namespace std;
int stringToInt(char arr[]){
    int len = strlen(arr);
    int c=0;
    for(int i=0;i<len;i++)
        c+=(arr[i]-'0')*int(ceil(pow(10,i)));
    return c;
}
void PrintIntRev(int a){
    int k= a%10;
    a/=10;
    while(k==0){
        k=a%10;
        a/=10;
    }
    cout<<k;
    while(a!=0)
    {
        cout<<a%10;
        a=a/10;
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char arr1[100];
        char arr2[100];
        cin>>arr1>>arr2;
        getchar();
        int res_rev = stringToInt(arr1)+stringToInt(arr2);
        PrintIntRev(res_rev);
    }
    return 0;
}
