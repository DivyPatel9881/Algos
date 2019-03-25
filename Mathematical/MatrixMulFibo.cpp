//Matrix Multiplication.
#include<iostream>
using namespace std;
struct Matrix22{
    int m[2][2];
};
struct Matrix22 index;
struct Matrix22 Multiply22(struct Matrix22 m1,struct Matrix22 m2){
    struct Matrix22 res;
    res.m[0][0]=(m1.m[0][0]*m2.m[0][0])+(m1.m[0][1]*m2.m[1][0]);
    res.m[0][1]=(m1.m[0][0]*m2.m[0][1])+(m1.m[0][1]*m2.m[1][1]);
    res.m[1][0]=(m1.m[1][0]*m2.m[0][0])+(m1.m[1][1]*m2.m[1][0]);
    res.m[1][1]=(m1.m[1][0]*m2.m[0][1])+(m1.m[1][1]*m2.m[1][1]);
    return res;
}
struct Matrix22 Pow(struct Matrix22 m,int n){
    struct Matrix22 res;
    res.m[0][0]=1;
    res.m[0][1]=1;
    res.m[1][0]=1;
    res.m[1][1]=1;
    while(n){
        if(n%2==1)
            res=Multiply22(res,m);
        m=Multiply22(m,m);
        n/=2;
    }
    return res;
}
int Fibo(int n){
    struct Matrix22 res=Pow(index,n);
    return res.m[0][1];
}
int main(){
    index.m[0][0]=1;
    index.m[0][1]=1;
    index.m[1][0]=1;
    index.m[1][1]=0;
    int n;
    cin>>n;
    cout<<Fibo(n)<<endl;
    return 0;
}
