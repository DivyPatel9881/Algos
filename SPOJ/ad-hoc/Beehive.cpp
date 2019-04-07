// Beehive Numbers
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    while(n!=-1){
        if(n==1)
            cout<<"Y"<<endl;
        else{

            int k = (n-1);
            if(k%3==0)
                k = k/3;
            else{
                cout<<"N"<<endl;
                cin>>n;
                continue;
            }
            int l = floor(sqrt(k));
            if(k%l==0){
                int i = k/l;
                if(i-l==1)
                    cout<<"Y"<<endl;
                else
                    cout<<"N"<<endl;
            }
            else
                cout<<"N"<<endl;
        }
        cin>>n;
    }
}
