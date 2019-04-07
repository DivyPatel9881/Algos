//STRCH
#include<bits/stdc++.h>
using namespace std;
long long CalcSum(long long n){
    return n*(n+1)/2;
}
long long NumSubs(char arr[],char x){
    long long len = strlen(arr);
    int l = 0;
    long long sum=0;
    for(int i=0;i<len;){
        if(arr[i]==x){
            sum+=CalcSum(i-l);
            i++;
            while(i<len&&arr[i]==x)
                i++;
            l=i;
        }
        if(i==len-1 && arr[i]!=x)
            sum+=CalcSum(i-l+1);
        i++;
    }
    return CalcSum(len)-sum;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int len;
        cin>>len;
        char arr[1000001];
        char x;
        cin>>arr;
        getchar();
        cin>>x;
        cout<<NumSubs(arr,x)<<endl;
        getchar();
    }
}
