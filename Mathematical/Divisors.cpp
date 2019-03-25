//Find all the divisors of the number.
#include<bits/stdc++.h>
using namespace std;
vector <int>FindAllDivisors(int n){
    vector <int>v;
    for(int i=1;i<ceil(sqrt(n));i++)
        if(n%i==0)
        {
            if(i!=n/i)
                v.push_back(n/i);
            v.push_back(i);
        }
    return v;
}
int main(){
    int n;
    cin>>n;
    vector <int>v=FindAllDivisors(n);
    for(int i=0;i<v.size();i++)
        cout<<v[i]<<" ";
    cout<<endl;
    return 0;
}
