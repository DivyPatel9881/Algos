//Scheduling to maximize profit.
#include<bits/stdc++.h>
using namespace std;
void RemoveByValue(vector<int> &v,int i){
    vector<int> :: iterator position = find(v.begin(),v.end(),i);
    if(position!=v.end())
        v.erase(position);
}
map<pair<vector<int>,int>,int> MaxP;
int MaxProfit(int D[],int Du[],int P[],int n,int tillnow,vector <int> v){
    pair<vector<int>,int> p;
    p.first = v;
    p.second = tillnow;
    int k = MaxP[p];
    if(k!=0)
        return k;
    else{
        if(n==0)
        {
            MaxP[p] = 0;
            return 0;
        }
        else{
            int Max=0;
            cout<<"Entered else."<<endl;
            for(int i=0;i<v.size();i++){
                vector<int> v1;
                for(int i=0;i<v.size();i++)
                    v1.push_back(v[i]);
                int in = v[i]-1;
                RemoveByValue(v1,v[i]);
                //cout<<v.size()<<" "<<v1.size()<<endl;
                int val;
                if(Du[in]<=D[in]-tillnow)
                    val = P[in] + MaxProfit(D,Du,P,n-1,tillnow+Du[in],v1);
                else
                    val = MaxProfit(D,Du,P,n-1,tillnow,v1);
                if(val>Max)
                    Max=val;
            }
            MaxP[p] = Max;
            for(int i=0;i<v.size();i++)
                cout<<v[i]<<" ";
            cout<<Max<<endl;
            return Max;
        }
    }
}
int main(){
    int n;
    int D[100];//Deadlines
    int Du[100];//Duration
    int P[100];//Profits;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>D[i]>>Du[i]>>P[i];
    vector<int> v;
    for(int i=1;i<=n;i++)
        v.push_back(i);
    cout<<MaxProfit(D,Du,P,n,0,v)<<endl;
    return 0;
}
