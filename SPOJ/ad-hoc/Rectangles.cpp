//Rectangles
#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int sum=1;
    for(int i=2;i<=n;i++){
        for(int j=1;j<=floor(sqrt(i));j++){
            if(i%j==0)
                sum+=1;
        }
    }
    cout<<sum<<endl;
    return 0;
}
