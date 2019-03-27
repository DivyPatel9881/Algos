//Tiling Problem.
#include<bits/stdc++.h>
using namespace std;
map<int,int> Tiling;
int NumWaysTiling(int n){
    int k=Tiling[n];
    if(k!=0)
        return k;
    else{
        if(n==1||n==0)
        {
            Tiling[n]=1;
            return 1;
        }
        else{
            Tiling[n] = NumWaysTiling(n-1)+NumWaysTiling(n-2);
            return Tiling[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<NumWaysTiling(n)<<endl;
    return 0;
}
