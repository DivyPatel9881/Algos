//Find LCM of array of elements.
#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int LCMArr(int arr[],int n){
    int res=arr[0];
    for(int i=1;i<n;i++)
        res=(res*arr[i])/GCD(arr[i],res);
    return res;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<LCMArr(arr,n)<<endl;
    return 0;
}
