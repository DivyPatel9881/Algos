#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
struct Pair{
    int arr[2];
};
int Abs(int i)
{
    if(i<0)
        return -i;
    return i;
}
struct Pair FindPair(int arr1[],int l1,int arr2[],int l2){
    int i=0,j=0;
    struct Pair a;
    int small = MAX;
    while(i<=l1-1 && j<=l2-1)
    {
        int diff = arr1[i]-arr2[j];
        int abs = Abs(diff);
        if(abs<small)
        {
            small = abs;
            a.arr[0]=arr1[i];
            a.arr[1]=arr2[j];
        }
        if(diff>0)
            j++;
        else if(diff<0)
            i++;
        else if(diff==0)
            return a;
    }
    return a;
}
int main(){
    int k1,k2;
    cout<<"Enter a lengths : ";
    cin>>k1>>k2;
    int arr1[100],arr2[100];
    for(int i=0;i<k1;i++)
        cin>>arr1[i];
    for(int i=0;i<k2;i++)
        cin>>arr2[i];
    struct Pair p = FindPair(arr1,k1,arr2,k2);
    cout<<p.arr[0]<<" "<<p.arr[1]<<endl;
    return 0;
}

