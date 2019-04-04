//Stamps
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++)
    {
        int n,m;
        cin>>n>>m;
        int arr[1000];
        for(int j=0;j<m;j++)
            cin>>arr[j];
        sort(arr,arr+m);
        int sum=0;
        int f=0;
        cout<<"Scenario #"<<i+1<<":"<<endl;
        for(int j=m-1;j>=0;j--){
            sum+=arr[j];
            f++;
            if(sum>=n){
                cout<<f<<endl;
                cout<<endl;
                break;
            }
        }
        if(sum<n)
        {
            cout<<"impossible"<<endl;
            cout<<endl;
        }
    }
    return 0;
}
