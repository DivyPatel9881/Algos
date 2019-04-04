//Maximum path sum in a triangle.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MaxS;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxPathSum(int **arr,int k,int i,int j){
    pair<int,int> p;
    p.first = i;
    p.second = j;
    int n = MaxS[p];
    if(n!=0)
        return n;
    else{
        if(i>=k){
            MaxS[p] = 0;
            return 0;
        }
        else{
            MaxS[p] = arr[i][j]+Max(MaxPathSum(arr,k,i+1,j),MaxPathSum(arr,k,i+1,j+1));
            return MaxS[p];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int ** arr = new int *[n];
    for(int i=0;i<n;i++)
        arr[i] = new int [100];
    for(int i=1;i<=n;i++)
        for(int j=1;j<=i;j++)
            cin>>arr[i-1][j-1];
    cout<<MaxPathSum(arr,n,0,0)<<endl;
    return 0;
}
