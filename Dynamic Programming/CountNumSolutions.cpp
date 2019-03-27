//Count number of solutions of linear equation of n variables.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> S;
int NumSolutions(int arr[],int n,int k){
    pair<int,int> p;
    p.first=n;
    p.second=k;
    int l=S[p];
    if(l!=0)
        return l;
    else{
        if(n<1||k<0)
        {
            S[p]=0;
            return 0;
        }
        else if(k==0){
            S[p]=1;
            return 1;
        }
        else{
            S[p]=NumSolutions(arr,n,k-arr[n-1])+NumSolutions(arr,n-1,k);
            return S[p];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int k;
    cin>>k;
    cout<<NumSolutions(arr,n,k)<<endl;
    return 0;
}
\