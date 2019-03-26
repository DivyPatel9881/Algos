//Possible Paths.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> M;
int CountPoss(int m,int n){
    pair<int,int> p;
    p.first=m;
    p.second=n;
    int k=M[p];
    if(k!=0)
        return k;
    else{
        if(m<1||n<1)
        {
            M[p]=0;
            return 0;
        }
        else if(m==1||n==1){
            M[p]=1;
            return 1;
        }
        else{
            M[p]=CountPoss(m-1,n)+CountPoss(m,n-1);
            return M[p];
        }
    }
}
int main(){
    int m,n;
    cin>>m>>n;
    cout<<CountPoss(m,n)<<endl;
    return 0;
}
