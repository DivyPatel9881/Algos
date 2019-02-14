#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,bool> Sub;
bool isSumSub(int arr[],int l,int sum){
    pair<int,int > p;
    p.first = l;
    p.second = sum;
    if(Sub[p]!=0)
        return Sub[p];
    else
    {
        if(sum==0)
            Sub[p] = true;
        else if(l<=0)
            Sub[p] = false;
        else
            Sub[p] = isSumSub(arr,l-1,sum-arr[l-1]) || isSumSub(arr,l-1,sum);
    }
    return Sub[p];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int sum;
    cout<<"Enter a number : ";
    cin>>sum;
    cout<<isSumSub(arr,k,sum)<<endl;
    return 0;
}
