//Activity Selection
#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a;
    int b;
};
int Compare(const void *a,const void *b){
    return ((struct Pair *)a)->b-((struct Pair *)b)->b;
}
vector <struct Pair> ActivitySelection(struct Pair arr[],int n){
    vector <struct Pair> v;
    qsort(arr,n,sizeof(arr[0]),Compare);
    v.push_back(arr[0]);
    int l=arr[0].b;
    for(int i=1;i<n;i++){
        if(l<=arr[i].a){
            v.push_back(arr[i]);
            l=arr[i].b;
        }
    }
    return v;
}
int main(){
    int n;
    struct Pair arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b;
    vector<struct Pair> v = ActivitySelection(arr,n);
    for(int i=0;i<v.size();i++)
        cout<<v[i].a<<" "<<v[i].b<<endl;
    return 0;
}
