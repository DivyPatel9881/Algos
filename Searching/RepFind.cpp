#include<bits/stdc++.h>
using namespace std;
struct Two{
    int arr[2];
};
struct Two Find(int arr[],int len){
    map <int,int> lookup;
    int sum=0;
    struct Two a;
    for(int i=0;i<len;i++)
    {
        if(lookup[arr[i]]==0)
        {
            sum+=arr[i];
            lookup[arr[i]]=-1;
        }
        else
            a.arr[0]=arr[i];
    }
    a.arr[1]=((len*(len+1))/2)-sum;
    return a;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Two b= Find(arr,k);
    cout<<b.arr[0]<<" "<<b.arr[1]<<endl;
    return 0;
}
