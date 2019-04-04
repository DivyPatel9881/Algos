//To and Fro
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    if(n==0)
        return 0;
    do{
        char arr[300];
        cin>>arr;
        int len=strlen(arr);
        char **arr1=new char *[len/n];
        for(int i=0;i<len/n;i++)
            arr1[i] = new char [n];
        int k=1;
        int l=0;
        while(k<=len/n){
            if(k%2==1)
                for(int i=0;i<n;i++)
                    arr1[k-1][i] = arr[l++];
            else
                for(int i=n-1;i>=0;i--)
                    arr1[k-1][i] = arr[l++];
            k++;
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<len/n;j++){
                cout<<arr1[j][i];
            }
        }
        cout<<endl;
        cin>>n;
    }while(n!=0);
    return 0;
}
