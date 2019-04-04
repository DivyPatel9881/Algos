//Friends Pairing problem.
#include<bits/stdc++.h>
using namespace std;
map<int,int> Pairs;
int FriendsPair(int n){
    int k = Pairs[n];
    if(k!=0)
        return k;
    else{
        if(n==0){
            Pairs[n]=1;
            return 1;
        }
        else if(n<0){
            Pairs[n]=0;
            return 0;
        }
        else{
            Pairs[n] = FriendsPair(n-1)+(n-1)*FriendsPair(n-2);
            return Pairs[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<FriendsPair(n)<<endl;
    return 0;
}
