//Find the first repeating element in a array
#include <bits/stdc++.h>
using namespace std;

int RepeatingElement(int arr[],int k){
    map <int,int> m;
    for(int i=0;i<k;i++){
        if(m[arr[i]]==1)
            return arr[i];
        else
            m[arr[i]]=1;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<RepeatingElement(arr,n)<<endl;
    return 0;
}
