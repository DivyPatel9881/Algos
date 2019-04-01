//Egyptian Fraction Problem
#include<bits/stdc++.h>
using namespace std;
vector<int> EgyptianFractions(int a,int b){
    vector<int> v;
    while(a!=0){
        int k = ceil((float)b/a);
        v.push_back(k);
        a = k*a - b;
        b = k*b;
    }
    return v;
}
int main(){
    int a,b;
    cin>>a>>b;
    vector <int> v = EgyptianFractions(a,b);
    for(int i=0;i<v.size();i++)
        cout<<1<<" "<<v[i]<<endl;
    return 0;
}
