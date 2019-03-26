//Maximum Sum Increasing subsequence.
#include<bits/stdc++.h>
using namespace std;
map<int,int> M;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxSum(int arr[],int n,int i,int p){
    if(i>n){
        M[i]=0;
        return 0;
    }
    else{
        if(arr[i-1]>p){
            int k=M[i];
            if(k!=0)
                return k;
            else{
                M[i]=Max(MaxSum(arr,n,i+1,arr[i-1])+arr[i-1],MaxSum(arr,n,i+1,p));
                return M[i];
            }
        }
        else{
            M[i]=MaxSum(arr,n,i+1,p);
            return M[i];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSum(arr,n,1,0)<<endl;
    return 0;
}
