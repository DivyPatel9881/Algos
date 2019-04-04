//Aggressive cows.
#include<bits/stdc++.h>
using namespace std;
int BinaryS(int arr[],int l,int h,int l3,int h3){
    for(int i=l3;i<=h3;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    int k = (l3+h3)/2;
    if(l3<h3){
        if(h3-l3==1)
        {
            if(arr[l]-arr[k]==0)
                return k+1;
            else if(arr[k+1]-arr[h]==0)
                return k;
            else{
                int l1 = arr[k]-arr[l];
                int h1 = arr[h]-arr[k];
                int l2 = arr[k+1]-arr[l];
                int h2 = arr[h]-arr[k+1];
                if(l1>h1){
                    if(l2>h2){
                        if(h1>h2)
                            return k;
                        return k+1;
                    }
                    else{
                        if(h1>l2)
                            return k;
                        return k+1;
                    }
                }
                else{
                    if(l2>h2){
                        if(l1>h2)
                            return k;
                        return k+1;
                    }
                    else{
                        if(l2<l1)
                            return k;
                        return k+1;
                    }
                }
            }
        }
        else if(arr[k]-arr[l]>arr[h]-arr[k])
            return BinaryS(arr,l,h,l3,k);
        else if(arr[k]-arr[l]<arr[h]-arr[k])
            return BinaryS(arr,l,h,k,h3);
    }
}
void FindPos(int arr[],int n,int m,vector<int> &v){
    if(m==0){
    }
    else{
        cout<<BinaryS(arr,0,n-1,0,n-1)<<endl;
    }
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int arr[100000];
        int n,m;
        cin>>n>>m;
        for(int j=0;j<n;j++)
            cin>>arr[j];
        sort(arr,arr+n);
        vector<int> v;
        v.push_back(arr[0]);
        v.push_back(arr[n-1]);
        m=m-2;
        FindPos(arr,n,m,v);
    }
    return 0;
}
