//Politeness of a number
#include<bits/stdc++.h>
using namespace std;
int Politeness(int n){
    vector <int>v;
    for(int i=2;i<=floor(sqrt(n));i++)
    {
        int j=0;
        while(n%i==0)
        {
            n/=i;
            j++;
        }
        v.push_back(j);
    }
    if(n>1)
        v.push_back(1);
    int res=1;
    for(int i=0;i<v.size();i++)
        res*=(v[i]+1);
    return res-1;
}
int main(){
    int n;
    cin>>n;
    cout<<Politeness(n)<<endl;
    return 0;
}
