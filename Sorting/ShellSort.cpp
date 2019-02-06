#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b)
{
    int temp=a;
    a=b;
    b=temp;
}
void Sort(int arr[],int len){
    int jump = (len+1)/2;
    while(jump)
    {
        for(int j=0;j<=len-jump-1;j++)
        {
            if(arr[j]>arr[j+jump])
                Swap(arr[j],arr[j+jump]);
        }
        jump = jump/2;
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
