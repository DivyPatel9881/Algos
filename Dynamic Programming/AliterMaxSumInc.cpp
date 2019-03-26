//Aliter for Maximum increasing sum.
#include<bits/stdc++.h>
using namespace std;
map<int,int> M;
int MaxSumInc(int arr[],int n){
    for(int i=n;i>=1;i--){
        M[i]=arr[i-1];
        int Max=0;
        for(int j=i;j<n;j++){
            if(arr[j]>arr[i-1])
                if(Max<M[j+1])
                    Max=M[j+1];
        }
        M[i]+=Max;
    }
    return M[1];
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSumInc(arr,n)<<endl;
    return 0;
}
