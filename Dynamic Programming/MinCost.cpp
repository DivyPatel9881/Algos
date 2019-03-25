//Min Cost Path.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int> ,int> Cost;
int Min(int a,int b,int c){
    if(a==b && b==c)
        return 0;
    else if(a<=b){
        if(a<c)
            return a;
        else if(c<a && c<b)
            return c;
    }
    else if(a>b){
        if(b<c)
            return b;
        else if(c<a&&c<a)
            return c;
    }
}
int MinCost(int arr[][100],int n1,int n2){
    if(n1<1 || n2<1)
        return 3873874;
    else{
        pair<int,int > p;
        p.first=n1;
        p.second=n2;
        int k=Cost[p];
        if(k!=0)
            return k;
        else{
            Cost[p] = Min(MinCost(arr,n1-1,n2-1),MinCost(arr,n1-1,n2),MinCost(arr,n1,n2-1))+arr[n1-1][n2-1];
            return Cost[p];
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
    cout<<MinCost(arr,n,n)<<endl;
    return 0;
}
