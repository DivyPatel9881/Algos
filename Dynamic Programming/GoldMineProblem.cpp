//Gold mine problem.
#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
map<pair<int,int>,int> MaxG;
int MaxGoldPath(int arr[][100],int n,int m,int i,int j){
    pair<int,int> p;
    p.first=i;
    p.second=j;
    int k=MaxG[p];
    if(k!=0)
        return k;
    else{
        if(i<1||i>n||j>m)
        {
            MaxG[p]=0;
            return 0;
        }
        else{
            MaxG[p] = arr[i-1][j-1]+Max(MaxGoldPath(arr,n,m,i-1,j+1),Max(MaxGoldPath(arr,n,m,i,j+1),MaxGoldPath(arr,n,m,i+1,j+1)));
            return MaxG[p];
        }
    }
}
int MaxGold(int arr[][100],int n,int m){
    int k=0;
    for(int i=0;i<n;i++)
        k=Max(k,MaxGoldPath(arr,n,m,i+1,1));
    return k;
}
int main(){
    int n,m;
    cin>>n>>m;
    int arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    cout<<MaxGold(arr,n,m)<<endl;
    return 0;
}
