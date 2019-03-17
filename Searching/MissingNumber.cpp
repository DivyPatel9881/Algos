//You are given a list of n-1 integers and these integers are in the range of 1 to n. There are no duplicates in list. One of the integers is missing in the list. Write an efficient code to find the missing integer.
#include <iostream>
using namespace std;

int MissingNumber(int arr[],int n)
{
    int sum=0;
    for(int i=0;i<n;i++)
        sum+=arr[i];
    return (n+1)*(n+2)/2 - sum;
}
int main()
{
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<MissingNumber(arr,n);
    return 0;
}
