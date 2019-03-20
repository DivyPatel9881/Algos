//Sort according to another array.
#include<bits/stdc++.h>
using namespace std;
map<int,int> m;
int Compare(const void * a,const void * b){
    return m[*(int *)a]-m[*(int *)b];
}
void Sort(int arr1[],int n1,int arr2[],int n2){
    for(int i=0;i<n2;i++)
        m[arr2[i]]=i+1;
    for(int i=0;i<n1;i++)
        if(m[arr1[i]]==0)
            m[arr1[i]]=arr1[i]+72373;
    qsort(arr1,n1,sizeof(int),Compare);
}
int main(){
    int n1,n2;
    cin>>n1;
    int arr1[100];
    int arr2[100];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    Sort(arr1,n1,arr2,n2);
    for(int i=0;i<n1;i++)
        cout<<arr1[i]<<" ";
    cout<<endl;
    return 0;
}
