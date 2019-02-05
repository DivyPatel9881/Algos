#include<bits/stdc++.h>
using namespace std;
struct Two{
    int arr[2];
};
int min(int a,int b)
{
    return a<b?a:b;
}
int max(int a,int b)
{
    return a>b?a:b;
}
struct Two MinMax(int arr[],int len)
{
    struct Two a;
    if(len%2==0)
    {
        a.arr[1] = min(arr[0],arr[1]);
        a.arr[0] = max(arr[0],arr[1]);
        for(int i=2;i<len;i+=2){
            int g = max(arr[i],arr[i+1]);
            int l = min(arr[i],arr[i+1]);
            if(g>a.arr[0])
                a.arr[0]=g;
            if(l<a.arr[1])
                a.arr[1]=l;
        }
        return a;
    }
    else
    {
        a.arr[1] = arr[0];
        a.arr[0] = arr[0];
        for(int i=1;i<len;i+=2){
            int g = max(arr[i],arr[i+1]);
            int l = min(arr[i],arr[i+1]);
            if(g>a.arr[0])
                a.arr[0]=g;
            if(l<a.arr[1])
                a.arr[1]=l;
        }
        return a;
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Two a=MinMax(arr,k);
    cout<<a.arr[0]<<" "<<a.arr[1]<<endl;
    return 0;
}
