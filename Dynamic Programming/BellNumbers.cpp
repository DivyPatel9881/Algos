//Bell Numbers(Counting number of partitions of a set.)
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> Bell;
int NumPartitions(int n1,int n2){
    pair<int,int> p;
    p.first=n1;
    p.second=n2;
    int k=Bell[p];
    if(k!=0)
        return k;
    else{
        if(n1==1)
        {
            Bell[p]=1;
            return 1;
        }
        else if(n2==1)
        {
            Bell[p]=NumPartitions(n1-1,n1-1);
            return Bell[p];
        }
        else{
            Bell[p]=NumPartitions(n1,n2-1)+NumPartitions(n1-1,n2-1);
            return Bell[p];
        }
    }
}
int main(){
    int n;
    cin>>n;
    pair<int,int> p;
    p.first=0;
    p.second=0;
    Bell[p]=1;
    cout<<NumPartitions(n,n)<<endl;
    return 0;
}
