//Find number of ways to reach a score.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> C;
int NumWays(int arr[],int n,int p){
    pair<int,int> p1;
    p1.first=n;
    p1.second=p;
    int k=C[p1];
    if(k!=0)
        return k;
    else{
        if(p<0||n<1)
            return 0;
        else if(p==0){
            C[p1]=1;
            return 1;
        }
        else{
            C[p1] = NumWays(arr,n,p-arr[n-1])+NumWays(arr,n-1,p);
            return C[p1];
        }
    }
}
int main(){
    int arr[]={3,5,10};
    int k;
    cin>>k;
    cout<<NumWays(arr,3,k)<<endl;
    return 0;
}
