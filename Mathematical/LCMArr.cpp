#include<iostream>
using namespace std;
int GCD(int a,int b){
    if(b==0)
        return a;
    return GCD(b,a%b);
}
int LCM(int arr[],int len){
    int result;
    result = arr[0];
    for(int i=1;i<len;i++){
        result = (result * arr[i])/GCD(result,arr[i]);
    }
    return result;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<LCM(arr,k)<<endl;
    return 0;
}
