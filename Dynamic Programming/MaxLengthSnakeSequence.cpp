//Max length of Snake Sequence.
#include<bits/stdc++.h>
using namespace std;
int Abs(int a){
    if(a<0)
        return -a;
    return a;
}
int Max(int a,int b){
    return a>b?a:b;
}
map<pair<int,int>,int> MaxLen;
int MaxLengthSnakeSeq(int arr[][100],int m1,int n1,int m2,int n2){
    pair<int,int> p;
    p.first=m2;
    p.second=n2;
    int k=MaxLen[p];
    if(k!=0)
        return k;
    else{
        if(m2>m1 || n2>n1){
            MaxLen[p]=0;
            return 0;
        }
        else if(Abs(arr[m2-1][n2-1]-arr[m2][n2-1])==1&&Abs(arr[m2-1][n2-1]-arr[m2-1][n2])==1){
            MaxLen[p]=1+Max(MaxLengthSnakeSeq(arr,m1,n1,m2+1,n2),MaxLengthSnakeSeq(arr,m1,n1,m2,n2+1));
            return MaxLen[p];
        }
        else if(Abs(arr[m2-1][n2-1]-arr[m2][n2-1])==1)
        {
            MaxLen[p]=1+MaxLengthSnakeSeq(arr,m1,n1,m2+1,n2);
            return MaxLen[p];
        }
        else if(Abs(arr[m2-1][n2-1]-arr[m2-1][n2])==1)
        {
            MaxLen[p]=1+MaxLengthSnakeSeq(arr,m1,n1,m2,n2+1);
            return MaxLen[p];
        }
        else{
            MaxLen[p]=1;
            return MaxLen[p];
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    int arr[100][100];
    for(int i=0;i<m;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<MaxLengthSnakeSeq(arr,m,n,1,1)<<endl;
    return 0;
}
