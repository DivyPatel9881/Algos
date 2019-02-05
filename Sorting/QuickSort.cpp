#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b)
{
    int temp =a;
    a=b;
    b=temp;
}
int Pivot(int arr[],int l,int h)
{
    int p = arr[h];
    int p1=l;
    for(int i=l;i<h;i++)
    {
        if(arr[i]<=p)
        {
            Swap(arr[i],arr[p1]);
            p1++;
        }
    }
    Swap(arr[p1],arr[h]);
    return p1;
}
void Sort(int arr[],int l,int h)
{
    if(l<=h)
    {
        int p = Pivot(arr,l,h);
        Sort(arr,l,p-1);
        Sort(arr,p+1,h);
    }
}

int main()
{
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,0,k-1);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
