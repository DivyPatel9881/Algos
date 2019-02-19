#include<bits/stdc++.h>
#define MAX 1000000000
using namespace std;
int main(){
    int t;
    cin>>t;
    int a,b;
    for(int i=0;i<t;i++)
    {
        cin>>a>>b;
        if(a==2 || a==1){
            cout<<2<<endl;
            for(int i=3;i<=b;i++){
                int flag=0;
                for(int j=2;j<=ceil(sqrt(i));j++)
                {
                    if(i%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    cout<<i<<endl;
            }
            cout<<endl;
        }
        else{
            for(int i=a;i<=b;i++){
                int flag=0;
                for(int j=2;j<=ceil(sqrt(i));j++)
                {
                    if(i%j==0)
                    {
                        flag=1;
                        break;
                    }
                }
                if(flag==0)
                    cout<<i<<endl;
            }
            cout<<endl;
        }
    }
    return 0;
}
