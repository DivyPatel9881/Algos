//Subset sum problem.
#include<bits/stdc++.h>
using namespace std;
map<int,bool> Sub;
bool isSubsetSum(int arr[],int n,int sum){
    int k=Sub[n];
    if(k)
        return k;
    else{
        if(n<1)
        {
            Sub[n]=false;
            return false;
        }
        else if(sum==0)
        {
            Sub[n]=true;
            return true;
        }
        else if(sum<0)
        {
            Sub[n] = isSubsetSum(arr,n-1,sum);
            return Sub[n];
        }
        else{
            Sub[n] = isSubsetSum(arr,n-1,sum-arr[n-1])||isSubsetSum(arr,n-1,sum);
            return Sub[n];
        }
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int sum;
    cin>>sum;
    cout<<isSubsetSum(arr,n,sum)<<endl;
    return 0;
}
