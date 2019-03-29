//Count number of ways to form n*4 grid from 1*4 dimension bricks.
#include<bits/stdc++.h>
using namespace std;
map<int,int> Ways;
int Count4Ways(int n){
    int k=Ways[n];
    if(k!=0)
        return k;
    else{
        if(n<0)
        {
            Ways[n]=0;
            return 0;
        }
        else if(n==1||n==0){
            Ways[n]=1;
            return 1;
        }
        else{
            Ways[n]=Count4Ways(n-1)+Count4Ways(n-4);
            return Ways[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Count4Ways(n)<<endl;
    return 0;
}
