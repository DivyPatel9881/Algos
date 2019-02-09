#include<bits/stdc++.h>
using namespace std;
int FindLPairSum(int arr[],int len){
    int large1=0,large2=0;
    for(int i=0;i<len;i++)
    {
        if(arr[i]>large1)
        {
            large2=large1;
            large1=arr[i];
        }
        else if(arr[i]<large1)
        {
            if(arr[i]>large2)
                large2=arr[i];
        }
    }
    return large1+large2;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FindLPairSum(arr,k)<<endl;
    return 0;
}
