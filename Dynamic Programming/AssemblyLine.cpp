//Assembly Line.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MTime;
int Min(int a,int b){
    return a<b?a:b;
}
int CalcMin(int arr1[][100],int arr2[][100],int n,int i,int l){
    pair<int,int>p;
    p.first=l;
    p.second=i;
    int k=MTime[p];
    if(k!=0)
        return k;
    else{
        if(l==1)
        {
            MTime[p]=Min(CalcMin(arr1,arr2,n,i-1,1)+arr1[0][i-1],CalcMin(arr1,arr2,n,i-1,2)+arr1[0][i-1]+arr2[1][i-1]);
            return MTime[p];
        }
        else{
            MTime[p]=Min(CalcMin(arr1,arr2,n,i-1,2)+arr1[1][i-1],CalcMin(arr1,arr2,n,i-1,1)+arr1[1][i-1]+arr2[0][i-1]);
            return MTime[p];
        }
    }
}
int MinTime(int arr1[][100],int arr2[][100],int e1,int e2,int x1,int x2,int ns){
    pair<int,int> p;
    p.first=1;
    p.second=1;
    MTime[p]=arr1[0][0]+e1;
    p.first=2;
    p.second=1;
    MTime[p]=arr1[1][0]+e2;
    return Min(CalcMin(arr1,arr2,ns,ns,1)+x1,CalcMin(arr1,arr2,ns,ns,2)+x2);
}
int main(){
    int ns;
    cin>>ns;
    int arr1[2][100];
    int arr2[2][100];
    for(int i=0;i<2;i++)
        for(int j=0;j<ns;j++)
            cin>>arr1[i][j];
    for(int i=0;i<2;i++)
        for(int j=0;j<ns;j++)
            cin>>arr2[i][j];
    int e1,e2,x1,x2;
    cin>>e1>>e2>>x1>>x2;
    cout<<MinTime(arr1,arr2,e1,e2,x1,x2,ns)<<endl;
    return 0;
}