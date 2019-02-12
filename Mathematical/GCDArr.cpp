#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int GCD(int arr[],int len){
    int result = arr[0];
    for(int i=1;i<len;i++)
        result = GCD(arr[i],result);
    return result;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<GCD(arr,k)<<endl;
    return 0;
}
