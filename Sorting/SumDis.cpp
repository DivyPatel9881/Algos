#include<bits/stdc++.h>
using namespace std;
int SumDis(int arr[],int len){
    map <int,int> m;
    int sum=0;
    for(int i=0;i<len;i++){
        if(m[arr[i]]==0)
        {
            sum+=arr[i];
            m[arr[i]]++;
        }
    }
    return sum;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<SumDis(arr,k)<<endl;
    return 0;
}
