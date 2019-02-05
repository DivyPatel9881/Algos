#include<bits/stdc++.h>
using namespace std;
void Swap(int &a,int &b)
{
    int temp = a;
    a = b;
    b = temp;
}
void Sort(int arr[],int len)
{
    for(int i=1;i<len;i++)
    {
        int temp = arr[i];
        int j;
        for(j=i-1;j>=0;j--)
        {
            if(temp<arr[j])
                arr[j+1] = arr[j];
            else
                break;
        }
        arr[j+1] = temp;
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : "<<endl;
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
