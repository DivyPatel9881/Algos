#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
int Compare(const void *a,const void *b){
    return (((struct Pair *)a)->b)-(((struct Pair *)b)->b);
}
int ActivitySelection(struct Pair arr[],int l){
    qsort(arr,l,sizeof(struct Pair),Compare);
    int Count=0;
    int start=0;
    for(int i=0;i<l;i++){
        if(start<=arr[i].a)
        {
            Count++;
            cout<<arr[i].a<<" "<<arr[i].b<<endl;
            start=arr[i].b;
        }
    }
    return Count;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    struct Pair arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i].a>>arr[i].b;
    cout<<ActivitySelection(arr,k)<<endl;
    return 0;
}
