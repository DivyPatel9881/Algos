//Kth Prime factor of a given number.
#include<iostream>
#include<cmath>
using namespace std;
int KthPrimeFactor(int n,int k){
    int j=0;
    for(int i=2;i<=floor(sqrt(n));i++)
    {
        while(n%i==0){
            j++;
            n/=i;
            if(j==k)
                return i;
        }
    }
    if(n>1)
    {
        j++;
        if(j==k)
            return n;
    }
    return -1;
}
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    cout<<KthPrimeFactor(n,k)<<endl;
    return 0;
}
