//Job Sequencing problem.
#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a;
    int b;
};
int Compare(const void *a,const void *b){
    return (*(struct Pair *)b).b-(*(struct Pair *)a).b;
}
int JobSequencing(struct Pair arr[],int n){
    qsort(arr,n,sizeof(arr[0]),Compare);
    static int arr1[100];
    int sum=0;
    for(int i=0;i<n;i++)
    {
        int l = arr[i].a;
        while(l>=1&&arr1[l-1]==1)
            l--;
        if(l>0){
            arr1[l-1]=1;
            sum+=arr[i].b;
        }
    }
    return sum;
}
int main(){
    int n;
    cin>>n;
    struct Pair arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b;
    cout<<JobSequencing(arr,n)<<endl;
    return 0;
}
