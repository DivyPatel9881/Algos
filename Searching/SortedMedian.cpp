//There are 2 sorted arrays A and B of size n each. Write an algorithm to find the median of the array obtained after merging the above 2 arrays(i.e. array of length 2n). The complexity should be O(log(n)).
#include <iostream>
using namespace std;
int Min(int a,int b)
{
    return a<b?a:b;
}
int Max(int a,int b)
{
    return a>b?a:b;
}
int FindMedian(int arr1[],int l1,int h1,int arr2[],int l2,int h2)
{
    if(h1-l1>1 && h2-l2>1){
        int k1=(l1+h1)/2;
        int k2=(l2+h2)/2;
        if(arr1[k1]<arr2[k2])
            return FindMedian(arr1,k1,h1,arr2,l2,k2);
        else if(arr1[k1]>arr2[k2])
            return FindMedian(arr1,l1,k1,arr2,k2,h2);
        else
            return arr1[k1];
    }
    return (max(arr1[l1],arr2[l2])+min(arr1[h1],arr2[h2]))/2;
}
int main()
{
    int k;
    cin>>k;
    int arr1[100],arr2[100];
    for(int i=0;i<k;i++)
        cin>>arr1[i];
    for(int i=0;i<k;i++)
        cin>>arr2[i];
    cout<<FindMedian(arr1,0,k-1,arr2,0,k-1)<<endl;
    return 0;
}
