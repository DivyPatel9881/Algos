//Sort the elements by frequency
#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int Compare(const void * a,const void *b){
    return  m[*(int *)b]-m[*(int *)a];
}
void sortByFrequency(int arr[],int n){
    for(int i=0;i<n;i++)
        m[arr[i]]++;
    qsort(arr,n,sizeof(int),Compare);
}
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    sortByFrequency(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
