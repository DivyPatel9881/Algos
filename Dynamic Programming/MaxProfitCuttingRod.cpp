//Cutting a rod.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> Profit;
struct Pair{
    int a,b;
};
int Max(int a,int b){
    return a>b?a:b;
}
int MaxProfit(struct Pair arr[],int n,int l){
    pair<int,int> p;
    p.first=n;
    p.second=l;
    int k=Profit[p];
    if(k!=0)
        return k;
    else{
        int a=l-arr[n-1].a;
        int b=n-1;
        if(b==0)
        {
            Profit[p]=0;
            return 0;
        }
        else if(a<0){
            Profit[p] = MaxProfit(arr,b,l);
        }
        else{
            Profit[p] = Max(MaxProfit(arr,n,a)+arr[n-1].b,MaxProfit(arr,b,l));
            return Profit[p];
        }
    }
}
int main(){
    int n;
    struct Pair arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b;
    int l;
    cin>>l;
    cout<<MaxProfit(arr,n,l)<<endl;
    return 0;
}
