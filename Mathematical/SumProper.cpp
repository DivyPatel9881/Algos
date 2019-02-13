#include<bits/stdc++.h>
using namespace std;
int ProperSum(int a){
    int sum=0;
    for(int i=1;i<=ceil(sqrt(a));i++){
        if(a%i==0){
            sum+=i;
            int h=a/i;
            if(h!=i && i!=1)
                sum+=h;
        }
    }
    return sum;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<ProperSum(k)<<endl;
    return 0;
}