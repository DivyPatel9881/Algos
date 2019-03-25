#include<bits/stdc++.h>
using namespace std;
vector<int> FindPrimeFactors(int n){
    vector<int>v;
    for(int i=2;i<=ceil(sqrt(n));i++){
        while(n%i==0){
            v.push_back(i);
            n/=i;
        }
    }
    if(n>1)
        v.push_back(n);
    return v;
}
int main(){
    int n;
    cin>>n;
    vector <int>v=FindPrimeFactors(n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
