//Prime factorisation using Seive of Eratosthenes theorem.
#include<bits/stdc++.h>
using namespace std;
map<int,int> sp;
void Seive(int n){
    for(int i=2;i<=n;i++)
    {
        if(sp[i]==0)
        {
            for(int j=i;j<=n;j+=i){
                if(sp[j]==0)
                    sp[j]=i;
            }
        }
    }
}
vector <int> FindPrimeFactors(int n){
    vector <int>v;
    Seive(n);
    while(n!=1)
    {
        v.push_back(sp[n]);
        n/=sp[n];
    }
    return v;
}
int main(){
    int n;
    cin>>n;
    vector <int> v=FindPrimeFactors(n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
	