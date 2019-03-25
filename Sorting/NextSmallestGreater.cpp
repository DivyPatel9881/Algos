//Next Minimum number greater than n with given set of digits.
#include<bits/stdc++.h>
using namespace std;
char *NextSmallerGre(char arr[]){
    vector <char> v;
    int len=strlen(arr);
    char s=arr[len-1];
    int i;
    for(i=len-2;i>=0;i--){
        if(arr[i+1]<arr[i])
            v.push_back(arr[i]);
        else
            break;
        if(i==0)
        {
            strcpy(arr,"\0");
            return arr;
        }
    }
    char k=arr[i];
    arr[i]=s;
    arr[i+1]=k;
    int l=0;
    for(int j=len-1;j>=i+2;j--)
        arr[j]=v[l++];
    arr[len]='\0';
    return arr;
}
int main(){
    char str[100];
    cin>>str;
    cout<<NextSmallerGre(str)<<endl;
    return 0;
}
	