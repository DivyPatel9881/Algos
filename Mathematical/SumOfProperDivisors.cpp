//Sum of Proper divisors of a number.
#include<iostream>
#include<cmath>
using namespace std;
int SumOfProperDivisors(int n){
    int sum=0;
    for(int i=1;i<=floor(sqrt(n));i++)
        if(n%i==0)
        {
            if(i!=1&&i!=n/i)
               sum+=n/i;
            sum+=i;
        }
    return sum;
}
int main(){
    int n;
    cin>>n;
    cout<<SumOfProperDivisors(n)<<endl;
    return 0;
}
