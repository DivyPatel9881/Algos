//Choice of area.
#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
int Max3(int a,int b,int c){
    return Max(a,Max(b,c));
}
map<pair<int,int> ,int> MaxT;
int CalcMaxTime(int a,int b,int x[],int y[],int z[],int l){
    pair<int,int> p;
    p.first=a;
    p.second=b;
    int k=MaxT[p];
    if(k!=0)
        return k;
    else{
        if(a<1||b<1)
        {
            MaxT[p]=0;
            return 0;
        }
        else if(l==1){
            int k1 = 1+CalcMaxTime(a+y[0],b+y[1],x,y,z,2);
            int k2 = 1+CalcMaxTime(a+z[0],b+z[1],x,y,z,3);
            MaxT[p] = Max(k1,k2);
            return MaxT[p];
        }
        else if(l==2){
            int k1 = 1+CalcMaxTime(a+x[0],b+x[1],x,y,z,1);
            int k2 = 1+CalcMaxTime(a+z[0],b+z[1],x,y,z,3);
            MaxT[p] = Max(k1,k2);
            return MaxT[p];
        }
        else if(l==3){
            int k1 = 1+CalcMaxTime(a+x[0],b+x[1],x,y,z,1);
            int k2 = 1+CalcMaxTime(a+y[0],b+y[1],x,y,z,2);
            MaxT[p] = Max(k1,k2);
            return MaxT[p];
        }
    }
}
int MaxTime(int a,int b,int x[],int y[],int z[]){
    int k1 = CalcMaxTime(a+x[0],b+x[1],x,y,z,1);
    int k2 = CalcMaxTime(a+y[0],b+y[1],x,y,z,2);
    int k3 = CalcMaxTime(a+z[0],b+z[1],x,y,z,3);
    return Max3(k1,k2,k3);
}
int main(){
    int a,b;
    cin>>a>>b;
    int X[2];
    int Y[2];
    int Z[2];
    cin>>X[0]>>X[1];
    cin>>Y[0]>>Y[1];
    cin>>Z[0]>>Z[1];
    cout<<MaxTime(a,b,X,Y,Z)<<endl;
    return 0;
}
