//Onotole needs your help
#include<iostream>
using namespace std;
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    int sum=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        int k;
        cin>>k;
        sum^=k;
    }
    cout<<sum<<endl;
}
