//Maximum path sum for each position with jumps under divisibility condition.
#include<bits/stdc++.h>
using namespace std;
map<int,int> MaxSum;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxSumDiv(int arr[],int n,int l){
    int k = MaxSum[l];
    if(k!=0)
        return k;
    else{
        if(l==1)
        {
            MaxSum[l]=arr[0];
            return arr[0];
        }
        else{
            vector<int> v;
            for(int i=2;i<=floor(sqrt(l));i++){
                if(l%i==0)
                {
                    if(l/i!=i){
                        v.push_back(i);
                        v.push_back(l/i);
                    }
                    else
                        v.push_back(i);
                }
            }
            v.push_back(1);
            sort(v.begin(),v.end());
            int k=0;
            for(int i=v.size()-1;i>=0;i--)
                k=Max(k,MaxSumDiv(arr,n,v[i]));
            MaxSum[l] = k+arr[l-1];
            return MaxSum[l];
        }
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MaxSumDiv(arr,n,n)<<endl;
    return 0;
}
