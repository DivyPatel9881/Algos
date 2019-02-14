#include<bits/stdc++.h>
using namespace std;
int Max(int a,int b){
    return (a>b)?a:b;
}
map <int,int> Cost;
int MaxRodCost(int arr[],int l){

    if(Cost[l]!=0)
        return Cost[l];
    else
    {
        if(l==1)
            Cost[l] = arr[0];
        else if(l==0)
            Cost[l] = 0;
        else{
            int m=0;
            for(int i=1;i<=l;i++)
                m = Max(m,arr[i-1]+MaxRodCost(arr,l-i));
            Cost[l] = m;
        }
    }
    return Cost[l];
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<MaxRodCost(arr,k)<<endl;
    return 0;
}
