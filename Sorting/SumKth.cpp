#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b){
    int temp = a;
    a=b;
    b=temp;
}
void Heapify(int arr[],int len,int i){
    int l = 2*i+1;
    int r = 2*i+2;
    int small;
    if(l<=len-1 && r<=len-1){
        if(arr[l]>arr[r])
            small = r;
        else
            small = l;
        if(arr[small] < arr[i])
        {
            Swap(arr[small],arr[i]);
            Heapify(arr,len,small);
        }
    }
    else if(l<=len-1 && r>len-1){
        if(arr[l]<arr[i])
        {
            Swap(arr[i],arr[l]);
            Heapify(arr,len,l);
        }
    }
}
int SumKth(int arr[],int len,int k1,int k2){
    int first = (len/2)-1;
    for(int i=first;i>=0;i--){
        Heapify(arr,len,i);
    }
    cout<<endl;
    int flag=0;
    int sum=0;
    for(int i=len-1;i>=0;i--){
        if(len-i==k1+1)
            flag=1;
        if(len-i==k2)
            flag=0;
        if(flag==1)
            sum+=arr[0];
        Swap(arr[0],arr[i]);
        Heapify(arr,i,0);
    }
    return sum;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int l1,l2;
    cout<<"Enter the numbers : ";
    cin>>l1>>l2;
    cout<<SumKth(arr,k,l1,l2)<<endl;
    return 0;
}
