#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
int Compare(const void *a,const void *b)
{
    return ((struct Pair *)a)->a - ((struct Pair *)b)->a;
}
bool isOverlap(struct Pair arr[],int k)
{
    qsort(arr,k,sizeof(struct Pair),Compare);
    int l=arr[0].a;
    int h=arr[0].b;
    for(int i=1;i<k;i++){
        int l1=arr[i].a;
        int h1=arr[i].b;
        if(l1>=l && l1<h)
            return true;
        if(h1>h)
            h=h1;
    }
    return false;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    struct Pair pairs[100];
    for(int i=0;i<k;i++)
        cin>>pairs[i].a>>pairs[i].b;
    cout<<isOverlap(pairs,k)<<endl;
    return 0;
}
