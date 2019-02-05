#include<bits/stdc++.h>

using namespace std;

bool Search(int arr[],int len,int a){
    for(int i=0;i<len;i++)
        if(a==arr[i])
            return true;
    return false;
}
int main(){
    int arr[100];
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int a;
    cout<<"Enter a number, you want to search : ";
    cin>>a;
    cout<<Search(arr,k,a)<<endl;
    return 0;
}
