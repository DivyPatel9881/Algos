//Perfect Sum Problem.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> Num;
int NumSubsets(int arr[],int n,int sum){
    pair<int,int> p;
    p.first = n;
    p.second = sum;
    int k = Num[p];
    if(k!=0)
        return k;
    else{
        if(sum==0){
            Num[p]=1;
            return 1;
        }
        else if(n==0){
            Num[p]=0;
            return 0;
        }
        else{
            if(arr[n-1]<=sum){
                Num[p] = NumSubsets(arr,n-1,sum)+NumSubsets(arr,n-1,sum-arr[n-1]);
                return Num[p];
            }
            else{
                Num[p] = NumSubsets(arr,n-1,sum);
                return Num[p];
            }
        }
    }
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cin>>sum;
    cout<<NumSubsets(arr,n,sum)<<endl;
    return 0;
}
