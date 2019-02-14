#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> Coin;
int CoinChangeSol(int arr[],int m,int n){
    pair<int,int> p;
    p.first=m;
    p.second=n;
    if(Coin[p]!=0)
        return Coin[p];
    else{
        if(n==0)
            Coin[p] = 1;
        else if(n<0)
            Coin[p] = 0;
        else if(m<=0)
            Coin[p] = 0;
        else{
            int x = CoinChangeSol(arr,m,n-arr[m-1]);
            int y = CoinChangeSol(arr,m-1,n);
            Coin[p] = x+y;
        }
    }
    return Coin[p];
}
int main(){
    int n,l;
    cout<<"Enter numbers : ";
    cin>>n>>l;
    int arr[100];
    for(int i=0;i<l;i++)
        cin>>arr[i];
    cout<<CoinChangeSol(arr,l,n)<<endl;
    return 0;
}
