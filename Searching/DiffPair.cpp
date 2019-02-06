#include<bits/stdc++.h>
using namespace std;
struct Two{
    int arr[2];
};
int abs(int i){
    if(i<0)
        return -i;
    return i;
}
struct Two Pair(int arr[],int len,int k){
    int l=0;
    int h=1;
    struct Two a;
    a.arr[0]=-1;
    a.arr[1]=-1;
    while(l<len&&h<len&&l!=h)
    {
        if(abs(arr[l]-arr[h])==k)
        {
            a.arr[0]=arr[l];
            a.arr[1]=arr[h];
            break;
        }
        else if(abs(arr[l]-arr[h])>k)
            l++;
        else if(abs(arr[l]-arr[h])<k)
            h++;
    }
    return a;
}
int main()
{
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    sort(arr,arr+k);
    cout<<"Enter a diff : ";
    int n;
    cin>>n;
    struct Two a = Pair(arr,k,n);
    cout<<a.arr[0]<<" "<<a.arr[1]<<endl;
    return 0;
}
