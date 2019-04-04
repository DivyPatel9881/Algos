//Minimize the steps to minimize  number n as given condition.
#include<bits/stdc++.h>
using namespace std;
map<int,int> MinS;
int Min(int a,int b){
    return a<b?a:b;
}
int MinStepsMinN(int n){
    int k = MinS[n];
    if(k!=0)
        return k;
    else{
        if(n==1){
            MinS[n] = 0;
            return 0;
        }
        else if(n%2==0 && n%3==0){
            MinS[n] = 1+Min(MinStepsMinN(n/2),Min(MinStepsMinN(n/3),MinStepsMinN(n-1)));
            return MinS[n];
        }
        else if(n%2==0)
        {
            MinS[n] = 1+Min(MinStepsMinN(n/2),MinStepsMinN(n-1));
            return MinS[n];
        }
        else if(n%3==0)
        {
            MinS[n] = 1+Min(MinStepsMinN(n/3),MinStepsMinN(n-1));
            return MinS[n];
        }
        else{
            MinS[n] = 1+MinStepsMinN(n-1);
            return MinS[n];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<MinStepsMinN(n)<<endl;
    return 0;
}

