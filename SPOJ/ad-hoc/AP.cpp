// AP - Complete The Series (Easy)
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        long long n,m,sum;
        cin>>n>>m>>sum;
        long long num = sum*2/(n+m);
        cout<<num<<endl;
        long long d = (m-n)/(num-5);
        long long a = n - (2*d);
        for(long long i=0;i<num;i++)
            cout<<a+(i*d)<<" ";
        cout<<endl;
    }
    return 0;
}
