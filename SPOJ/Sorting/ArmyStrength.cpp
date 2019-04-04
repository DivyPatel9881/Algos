//Army Strength
#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int n,m;
        int arr1[100000];
        int arr2[100000];
        cin>>n>>m;
        for(int i=0;i<n;i++)
            cin>>arr1[i];
        for(int i=0;i<m;i++)
            cin>>arr2[i];
        sort(arr1,arr1+n);
        sort(arr2,arr2+m);
        int l1=0,l2=0;
        while(l1<n&&l2<m){
            if(arr1[l1]<arr2[l2])
                l1++;
            else if(arr1[l1]>=arr2[l2])
                l2++;
        }
        if(l1>n-1)
            cout<<"MechaGodzilla"<<endl;
        else
            cout<<"Godzilla"<<endl;
    }
}
