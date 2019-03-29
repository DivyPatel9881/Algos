//Max Average Problem.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MaxW;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxWeight(int arr[][100],int n,int l1,int l2){
    pair<int,int> p;
    p.first = l1;
    p.second=l2;
    int k=MaxW[p];
    if(k!=0)
        return k;
    else{
        if(l1<1||l2<1)
        {
            MaxW[p] = 0;
            return 0;
        }
        else{
            MaxW[p]=arr[l1-1][l2-1]+Max(MaxWeight(arr,n,l1-1,l2),MaxWeight(arr,n,l1,l2-1));
            return MaxW[p];
        }
    }
}
float MaxAveragePathWeight(int arr[][100],int n){
    return MaxWeight(arr,n,n,n)/float(2*n-1);
}
int main(){
    int n;
    cin>>n;
    int arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            cin>>arr[i][j];
    cout<<MaxAveragePathWeight(arr,n)<<endl;
    return 0;
}
