//Ugly Numbers.
#include<bits/stdc++.h>
using namespace std;
map<int,int> U;
int Ugly(int n){
    U[0]=1;
    if(n==0)
        return 1;
    else{
        int i=0;
        int l1=0;
        int l2=0;
        int l3=0;
        int last=1;
        while(true){
            int x1=U[l1]*2;
            int x2=U[l2]*3;
            int x3=U[l3]*5;
            if(x1<=x2){
                if(x1<x3){
                    if(last!=x1){
                        U[i+1]=x1;
                        last=x1;
                        i++;
                    }
                    l1++;
                }
                else if(x3<x1 && x3<x2){
                    if(last!=x3){
                        U[i+1]=x3;
                        last=x3;
                        i++;
                    }
                    l3++;
                }
            }
            else if(x1>x2){
                if(x2<x3){
                    if(last!=x2){
                        U[i+1]=x2;
                        last=x2;
                        i++;
                    }
                    l2++;
                }
                else if(x3<x2 && x3<x1){
                    if(last!=x3){
                        U[i+1]=x3;
                        last=x3;
                        i++;
                    }
                    l3++;
                }
            }
            if(i==n)
                return U[i];
        }
    }
}
int main(){
    int n;
    cin>>n;
    cout<<Ugly(n)<<endl;
    return 0;
}
