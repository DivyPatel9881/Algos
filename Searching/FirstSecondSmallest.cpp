//Find the smallest and second smallest elements in an array#include
#include <iostream>
#define MAX 372388
using namespace std;
struct Pair
{
    int a,b;
};
struct Pair FirstSecondSmallest(int arr[],int k)
{
    struct Pair p;
    int s1=MAX,s2=MAX;
    for(int i=0;i<k;i++){
        if(arr[i]<s1)
            s1=arr[i];
        else{
            if(arr[i]<s2)
                s2=arr[i];
        }
    }
    p.a=s1;
    p.b=s2;
    return p;
}
int main()
{
    int k;
    int arr[100];
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Pair p = FirstSecondSmallest(arr,k);
    cout<<p.a<<" "<<p.b<<endl;
    return 0;
}
