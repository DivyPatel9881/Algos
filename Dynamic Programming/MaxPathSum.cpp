//Maximum Path Sum with any cell.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MaxS;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxPath(int arr[][100],int n,int i,int j){
    pair<int,int> p;
    p.first = i;
    p.second = j;
    int k = MaxS[p];
    if(k!=0)
        return k;
    else{
        if(i>n || j<1 ||j>n)
        {
            MaxS[p] = 0;
            return 0;
        }
        else{
            MaxS[p] = arr[i-1][j-1]+Max(MaxPath(arr,n,i+1,j-1),Max(MaxPath(arr,n,i+1,j),MaxPath(arr,n,i+1,j+1)));
            return MaxS[p];
        }
    }
}
int MaxPathSum(int arr[][100],int n){
    pair<int,int> p;
    int M=0;
    for(int i=0;i<n;i++){
        int k = MaxPath(arr,n,i+1,1);
        p.first = i+1;
        p.second = 1;
        MaxS[p] = k;
        if(M<k)
            M=k;
    }
    return M;
}
int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<MaxPathSum(arr,n)<<endl;
    return 0;
}
