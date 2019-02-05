#include<bits/stdc++.h>

using namespace std;

int neg(int a)
{
    return -a;
}
int LowSum(int arr[],int len)
{
    int l=0;
    int h=len-1;
    int low=1000000000;
    while(l!=h)
    {
        int diff = (arr[l]+arr[h]);
        if(diff == 0)
            return 0;
        else if(diff>0)
        {
            if(diff<low)
                low = diff;
            h--;
        }
        else if(diff<0)
        {
            if(neg(diff)<low)
                low = neg(diff);
            l++;
        }
    }
    return low;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    sort(arr,arr+k);
    cout<<LowSum(arr,k)<<endl;
    return 0;
}
