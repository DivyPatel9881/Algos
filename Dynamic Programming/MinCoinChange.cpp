//Minimum coin changing problem.
#include<bits/stdc++.h>
#define MAX 26276276
using namespace std;
map<pair<int,int>,int> MinC;
int Min(int a,int b){
    return a<b?a:b;
}
int MinCoins(int arr[],int n,int c){
    pair<int,int> p;
    p.first = n;
    p.second = c;
    int k = MinC[p];
    if(k!=0)
        return k;
    else{
        if(n==0 && c>0){
            MinC[p] = MAX;
            return MAX;
        }

        else if(c==0)
            return 0;
        else if(c>=arr[n-1])
        {
            MinC[p] = Min(1+MinCoins(arr,n,c-arr[n-1]),MinCoins(arr,n-1,c));
            return MinC[p];
        }
    }
}
int main(){
    int c;
    cin>>c;
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MinCoins(arr,n,c)<<endl;
    return 0;
}
