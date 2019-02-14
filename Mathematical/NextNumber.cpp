#include<bits/stdc++.h>
using namespace std;
void Next(char arr[100]){
    int in=-1;
    int len = strlen(arr);
    for(int i=len-1;i>=0;i--){
        if(arr[i]>arr[i-1])
        {
            in=i-1;
            break;
        }
    }
    if(in==-1)
        cout<<"Not Possible"<<endl;
    else{
        for(int i=0;i<in;i++)
            cout<<arr[i];
        cout<<arr[len-1]<<arr[in];
        for(int i=len-2;i>in;i--)
            cout<<arr[i];
    }
}
int main(){
    char arr[100];
    cout<<"Enter large Number : ";
    cin>>arr;
    Next(arr);
    return 0;
}
