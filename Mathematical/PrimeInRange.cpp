//Find Prime numbers in the given range.
#include<bits/stdc++.h>
using namespace std;
map<int,int> sp;
void Seive(int n){
    for(int i=2;i<=n;i++){
        if(sp[i]==0){
            for(int j=i;j<=n;j+=i){
                if(sp[j]==0)
                    sp[j]=i;
            }
        }
    }
}
vector <int>PrimeInRange(int l,int h){
    Seive(h);
    vector<int>v;
    for(int i=l;i<=h;i++)
        if(sp[i]==i)
            v.push_back(i);
    return v;
}
int main(){
    int l,h;
    cin>>l>>h;
    vector <int>v=PrimeInRange(l,h);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
