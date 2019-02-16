#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
int Compare(const void *a,const void *b){
    return ((struct Pair *)b)->a-((struct Pair *)a)->a;
}
int JobSequencing(struct Pair arr[],int l){
    qsort(arr,l,sizeof(struct Pair),Compare);
    int Max=0;
    int Count=0;
    for(int i=0;i<l;i++)
        if(Max<arr[i].b)
            Max = arr[i].b;
    int Stat[10];
    for(int i=0;i<Max;i++)
        Stat[i]=0;
    for(int i=0;i<l;i++){
        if(!Stat[arr[i].b-1])
        {
            cout<<arr[i].a<<" "<<arr[i].b<<endl;
            Stat[arr[i].b-1] = 1;
            Count++;
        }
        else{
            for(int j=i-1;j>=0;j--)
            {
                if(!Stat[arr[j].b-1])
                {
                    cout<<arr[j].a<<" "<<arr[j].b<<endl;
                    Stat[arr[j].b-1] = 1;
                    Count++;
                    break;
                }
            }
        }
    }
    return Count;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    struct Pair arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i].a>>arr[i].b;
    cout<<JobSequencing(arr,k)<<endl;
    return 0;
}
