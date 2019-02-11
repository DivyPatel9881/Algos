#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
int Compare(const void * a,const void * b)
{
    return ((struct Pair*)a)->b - ((struct Pair*)b)->b;
}
void SortByFre(int arr[],int len)
{
    map<int,int> m;
    vector <int> v;
    vector<int> :: iterator it;
    for(int i=0;i<len;i++)
    {
        if(m[arr[i]]==0)
            v.push_back(arr[i]);
        m[arr[i]]++;
    }
    struct Pair arr1[len];
    int j=0;
    for(it=v.begin();v.end()!=it;it++)
    {
        int l=*it;
        arr1[j].a=l;
        arr1[j++].b=m[l];
    }
    qsort(arr1,j,sizeof(struct Pair),Compare);
    for(int i=0;i<j;i++)
        cout<<arr1[i].a<<" "<<arr1[i].b<<endl;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    SortByFre(arr,k);
    return 0;
}
