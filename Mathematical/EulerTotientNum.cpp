#include<bits/stdc++.h>
using namespace std;
map <int,int> spf;
void Seive(int a){
    int *arr = new int [a-1];
    for(int i=0;i<a-1;i++)
        arr[i]=i+2;
    int in=0;
    while(in<a-1){
        int k=arr[in];
        if(k!=0)
        {
            spf[k] = k;
            for(int i=in+k ; i<a-1 ; i+=k){
                spf[arr[i]] = k;
                arr[i]=0;
            }
        }
        in++;
    }
}
int Phi(int a){
    Seive(a);
    if(a==1)
        return 1;
    set<int> s;
    set <int>::iterator it;
    int k1=a;
    while(a!=1){
        int k=spf[a];
        s.insert(k);
        a/=k;
    }
    float result=float(k1);
    for(it = s.begin();it!=s.end();it++)
        result*=(1.0-(1.0/float(*it)));
    return result;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=1;i<=k;i++)
        cout<<Phi(i)<<" ";
    cout<<endl;
    return 0;
}
