//Minimum Cost to fill given weight to fill given weight.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> MinCost;
int Min(int a,int b){
    return a<b?a:b;
}
int MinCostWeight(int arr[],int n,int c,int l){
    pair<int,int> p;
    p.first=c;
    p.second=l;
    int k=MinCost[p];
    if(k!=0)
        return k;
    else{
        if(c<0){
            MinCost[p]=-1;
            return -1;
        }
        else if(c==0){
            MinCost[p]=0;
            return 0;
        }
        else if(l>n){
            MinCost[p]=-1;
            return -1;
        }
        else{
            int k1=-1;
            if(arr[l-1]!=-1)
                k1 = MinCostWeight(arr,n,c-l,l);
            int k2 = MinCostWeight(arr,n,c,l+1);
            if(k1!=-1 && k2!=-1){
                MinCost[p] = Min(arr[l-1]+k1,k2);
                return MinCost[p];
            }
            else if(k1!=-1){
                MinCost[p] = arr[l-1]+k1;
                return MinCost[p];
            }
            else if(k2!=-1){
                MinCost[p] = k2;
                return MinCost[p];
            }
            else{
                MinCost[p]=-1;
                return -1;
            }
        }
    }
}
int main()
{
    int n;
    cin>>n;
    int c;
    cin>>c;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MinCostWeight(arr,n,c,1)<<endl;
    return 0;
}
