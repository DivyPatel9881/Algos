//Maximum and minimum of an array using minimum number of comparisons
#include <iostream>
using namespace std;

struct Pair
{
    int a,b;
};
int MaxF(int a,int b){
    return a>b?a:b;
}
int MinF(int a,int b){
    return a<b?a:b;
}
struct Pair MinMax(int arr[],int k)
{
    struct Pair m;
    int Min;
    int Max;
    if(k%2==0)
    {
        Min = MinF(arr[0],arr[1]);
        Max = MaxF(arr[0],arr[1]);
        for(int i=2;i<k;i++)
        {
            int k1=MinF(arr[i],arr[i+1]);
            if(k1<Min)
                Min = k1;
            int k2=MaxF(arr[i],arr[++i]);
            if(k2>Max)
                Max = k2;
        }
    }
    else if(k%2!=0)
    {
        Min = arr[0];
        Max = arr[0];
        for(int i=1;i<k;i++)
        {
            int k1=MinF(arr[i],arr[i+1]);
            if(k1<Min)
                Min = k1;
            int k2=MaxF(arr[i],arr[++i]);
            if(k2>Max)
                Max = k2;
        }
    }
    m.a=Min;
    m.b=Max;
    return m;
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Pair p = MinMax(arr,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
