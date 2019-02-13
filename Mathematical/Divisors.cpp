#include<bits/stdc++.h>
using namespace std;
void Divisors(int a) {
    for(int i=1;i<=ceil(sqrt(a));i++){
        if(a%i==0){
            cout<<i<<" ";
            int h=a/i;
            if(h!=i)
                cout<<h<<" ";
        }
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    Divisors(k);
    return 0;
}
