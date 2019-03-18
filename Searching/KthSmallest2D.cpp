//Given an n x n matrix, where every row and column is sorted in non-decreasing order. Find the kth smallest element in the given 2D array
#include <iostream>
using namespace std;
struct Pair{
    int val;
    int i,j;
};
void Swap(struct Pair &a,struct Pair &b)
{
    struct Pair t=a;
    a=b;
    b=t;
}
void Heapify(struct Pair arr[],int n,int k){
    int l=2*k+1;
    int r=2*k+2;
    if(r<=n-1){
        int smallest=k;
        if(arr[smallest].val>arr[l].val)
            smallest=l;
        if(arr[smallest].val>arr[r].val)
            smallest=r;
        if(smallest!=k){
            Swap(arr[smallest],arr[k]);
            Heapify(arr,n,smallest);
        }
    }
    else if(l<=n-1){
        int smallest=k;
        if(arr[smallest].val>arr[l].val)
            smallest=l;
        if(smallest!=k)
        {
            Swap(arr[smallest],arr[k]);
            Heapify(arr,n,smallest);
        }
    }
}
int KthSmallestElement(struct Pair arr[100][100],int n,int k){
    int l=(n-2)/2;
    for(int i=l;i>=0;i--)
        Heapify(arr[0],n,i);
    for(int i=1;i<k;i++){
        arr[0][0] = arr[arr[0][0].i+1][arr[0][0].j];
        Heapify(arr[0],n,0);
    }
    return arr[0][0].val;
}
int main(){
    int n;
    cin>>n;
    struct Pair arr[100][100];
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++){
            cin>>arr[i][j].val;
            arr[i][j].i=i;
            arr[i][j].j=j;
        }
    int k;
    cin>>k;
    cout<<KthSmallestElement(arr,n,k)<<endl;
    return 0;
}
