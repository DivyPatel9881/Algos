#include<bits/stdc++.h>
using namespace std;
int val;
int Abs(int i){
    if(i<0)
        return -i;
    return i;
}
int Compare(const void *a,const void *b){
    return Abs((*(int *)a)-val) - Abs((*(int *)b)-val);
}
void Sort(int arr[],int len){
    qsort(arr,len,sizeof(int),Compare);
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<"Enter a number : ";
    cin>>val;
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
