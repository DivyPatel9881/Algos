//Sort strings.
#include<bits/stdc++.h>
using namespace std;
int Compare(const void *a,const void *b){
    if(*(string *)a<*(string *)b)
        return -1;
    else if(*(string *)a>*(string *)b)
        return 1;
    return 0;
}
void Sort(string arr[], int n){
    qsort(arr,n,sizeof(arr[0]),Compare);
}
int main(){
    int n;
    cin>>n;
    string arr[100];
    getchar();
    for(int i=0;i<n;i++)
        getline(cin,arr[i]);
    Sort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    return 0;
}
