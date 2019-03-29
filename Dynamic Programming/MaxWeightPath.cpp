//Maximum Weight Path Ending at any element of last row of the matrix.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int> ,int> MaxW;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxWeightOfPath(int arr[][100],int n,int l1,int l2){
    pair<int,int> p;
    p.first=l1;
    p.second=l2;
    int k=MaxW[p];
    if(k!=0)
        return k;
    else{
        if(l1>n||l2>n)
        {
            MaxW[p]=0;
            return 0;
        }
        else{
            MaxW[p] = arr[l1-1][l2-1]+Max(MaxWeightOfPath(arr,n,l1+1,l2),MaxWeightOfPath(arr,n,l1+1,l2+1));
            return MaxW[p];
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<MaxWeightOfPath(arr,n,1,1)<<endl;
    return 0;
}
