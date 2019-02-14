#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MinC;
int Min(int a,int b,int c){
    if(a<b)
    {
        if(a<c)
            return a;
        else
            return c;
    }
    else{
        if(b<c)
            return b;
        else
            return c;
    }
}
int MinCost(int arr[][100],int r,int c,int r1,int c1){
    pair<int,int> p;
    p.first = r1;
    p.second = c1;
    if(MinC[p]!=0)
        return MinC[p];
    else{
        if(r1==0 && c1==0)
            MinC[p] = arr[0][0];
        else if(r1==0)
            MinC[p] = arr[r1][c1]+MinCost(arr,r,c,r1,c1-1);
        else if(c1==0)
            MinC[p] = arr[r1][c1]+MinCost(arr,r,c,r1-1,c1);
        else
            MinC[p] = arr[r1][c1]+Min(MinCost(arr,r,c,r1-1,c1),MinCost(arr,r,c,r1,c1-1),MinCost(arr,r,c,r1-1,c1-1));
    }
    return MinC[p];
}
int main(){
    int arr[100][100];
    int r,c;
    cout<<"Enter numbers : ";
    cin>>r>>c;
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
            cin>>arr[i][j];
    int i,j;
    cout<<"Enter Numbers : ";
    cin>>i>>j;
    cout<<MinCost(arr,r,c,i,j);
    return 0;
}
