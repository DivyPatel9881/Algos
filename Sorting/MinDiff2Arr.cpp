#include<bits/stdc++.h>
#define MAX 1000000
using namespace std;
struct Pair{
    int a,b;
};
int Abs(int i){
    if(i<0)
        return -i;
    return i;
}
struct Pair FindMin(int arr1[],int arr2[],int len){
    sort(arr1,arr1+len);
    sort(arr2,arr2+len);
    int l1=0,l2=0;
    struct Pair p;
    int small= MAX;
    while(l1<=len-1&&l2<=len-1){
        int diff = arr1[l1]-arr2[l2];
        int abs_diff = Abs(diff);
        if(small>abs_diff)
        {
            p.a = arr1[l1];
            p.b = arr2[l2];
            small = abs_diff;
        }
        if(diff<0)
            l1++;
        else if(diff>0)
            l2++;
        else if(diff==0)
            return p;
    }
    return p;
}
int main(){
    int k;
    int arr1[100],arr2[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr1[i];
    for(int i=0;i<k;i++)
        cin>>arr2[i];
    struct Pair p = FindMin(arr1,arr2,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
