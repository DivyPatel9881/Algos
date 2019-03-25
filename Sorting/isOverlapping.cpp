//Check if any intervals overlap or not.
#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
int Compare(const void *x,const void *y){
    return (*(struct Pair *)x).b - (*(struct Pair *)y).b;
}
bool isOverlapping(struct Pair arr[],int n){
    qsort(arr,n,sizeof(struct Pair),Compare);
    for(int i=0;i<n-1;i++){
        if(arr[i].b>arr[i+1].a)
            return true;
    }
    return false;
}
int main(){
    int n;
    struct Pair arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b;
    cout<<isOverlapping(arr,n)<<endl;
    return 0;
}
