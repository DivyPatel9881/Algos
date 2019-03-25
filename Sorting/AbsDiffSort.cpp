//Sort a array according to absolute difference.
#include<bits/stdc++.h>
using namespace std;
int d;
int Abs(int a){
    if(a<0)
        return -a;
    return a;
}
int Compare(const void *a,const void *b){
    return Abs(*(int *)a-d) - Abs(*(int *)b-d);
}
void SortAccAbs(int arr[],int n,int d){
    qsort(arr,n,sizeof(int),Compare);
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cin>>d;
    SortAccAbs(arr,n,d);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
