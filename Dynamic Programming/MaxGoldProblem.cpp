//Gold Mine Problem.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MaxG;
int Max(int a,int b){
    return a>b?a:b;
}
int FindMaxGold(int arr[][100],int n,int m,int i,int j){
    pair<int,int> p;
    p.first = i;
    p.second=j;
    int k = MaxG[p];
    if(k!=0)
        return k;
    else{
        if(i>n||i<1||j>m){
            MaxG[p]=0;
            return 0;
        }
        else{
            MaxG[p] = arr[i-1][j-1] + Max(FindMaxGold(arr,n,m,i-1,j+1),Max(FindMaxGold(arr,n,m,i,j+1),FindMaxGold(arr,n,m,i+1,j+1)));
            return MaxG[p];
        }
    }
}
int MaxGold(int arr[][100],int n,int m){
    pair<int,int> p;
    int M=0;
    for(int i=1;i<=n;i++){
        int k = FindMaxGold(arr,n,m,i,1);
        p.first = i;
        p.second = 1;
        MaxG[p] = k;
        if(M<k)
            M=k;
    }
    return M;
}
int main(){
    int n,m;
    int arr[100][100];
    cin>>n>>m;
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    cout<<MaxGold(arr,n,m)<<endl;
    return 0;
}

