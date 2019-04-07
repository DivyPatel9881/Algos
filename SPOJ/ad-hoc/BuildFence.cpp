//Build the fence.
#include<bits/stdc++.h>
using namespace std;
int main()
{
    float n;
    cin>>n;
    while(n!=0){
        printf("%.2f",n*n/(2*M_PI));
        cout<<endl;
        cin>>n;
    }
    return 0;
}
