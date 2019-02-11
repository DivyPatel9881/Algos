#include<bits/stdc++.h>
using namespace std;
int CountPairs(int arr[],int k,int a)
{
    int l=0,h=0;
    sort(arr,arr+k);
    int count=0;
    while(l<=k-1 && h<=k-1)
    {
        if(arr[h]-arr[l]==a)
        {
            count++;
            h++;
        }
        else if(arr[h]-arr[l]>a)
            l++;
        else if(arr[h]-arr[l]<a)
            h++;
    }
    return count;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int diff;
    cout<<"Enter a difference : ";
    cin>>diff;
    cout<<CountPairs(arr,k,diff)<<endl;
    return 0;
}
