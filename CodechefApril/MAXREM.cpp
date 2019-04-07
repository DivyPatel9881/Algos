// MAXREM
#include<bits/stdc++.h>
using namespace std;
int MaxRem(int arr[],int n){
    int max1=0;
    int max2=0;
    for(int i=0;i<n;i++)
    {
        if(arr[i]>max1){
            max2=max1;
            max1=arr[i];
        }
        else if(arr[i]==max1){
        }
        else if(arr[i]<max1)
            if(arr[i]>max2)
                max2=arr[i];
    }
    return max2%max1;
}
int main(){
    int n;
    cin>>n;
    cout<<n<<endl;
    int arr[1000000];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxRem(arr,n)<<endl;
    return 0;
}
