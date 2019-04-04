//Count on Cantor
#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n;
        cin>>n;
        int c=0;
        int a,b;
        for(int j=1;;j++){
            int sum=j+1;
            if(j%2==1){
                a=sum;
                b=0;
            }
            else{
                a=0;
                b=sum;
            }
            for(int k=1;k<=j;k++){
                c++;
                if(j%2==1){
                    a--;
                    b++;
                }
                else{
                    a++;
                    b--;
                }
                if(c==n){
                    cout<<"TERM "<<n<<" IS "<<a<<"/"<<b<<endl;
                    break;
                }
            }
            if(c==n)
                break;
        }
    }
    return 0;
}
