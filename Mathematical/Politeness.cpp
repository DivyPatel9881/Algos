#include<bits/stdc++.h>
using namespace std;
int Politeness(int a){
    map <int,int> m;
    set <int> s;
    set <int>::iterator it;
    int k=a;
    while(a%2==0){
        a/=2;
    }
    for(int i=3;i<=ceil(sqrt(k));i+=2){
        while(a%i==0){
            m[i]++;
            s.insert(i);
            a/=i;
        }
    }
    if(a!=1){
        m[a]++;
        s.insert(a);
    }
    int res=1;
    for(it = s.begin();it!=s.end();it++)
        res*=(m[*it]+1);
    return res-1;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<Politeness(k)<<endl;
    return 0;
}
