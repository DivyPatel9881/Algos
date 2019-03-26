//Minimum number of jumps.
#include<bits/stdc++.h>
using namespace std;
map<int,int> Min;
int M(int a,int b){
    return a<b?a:b;
}
int MinJumps(int arr[],int n,int i){
    if(i>=n-1){
        Min[i]=0;
        return 0;
    }
    else{
        int k=Min[i];
        if(k!=0)
            return k;
        else{
            int l=arr[i];
            int s=676752656;
            for(int j=i+1;j<=i+l && j<=n-1;j++)
                s=M(s,MinJumps(arr,n,j)+1);
            Min[i]=s;
            return s;
        }
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MinJumps(arr,n,0)<<endl;
    return 0;
}
