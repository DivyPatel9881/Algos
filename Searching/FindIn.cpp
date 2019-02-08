#include<bits/stdc++.h>
#define MAX 1000000

using namespace std;

int FindIn(int arr[],int len){
    map <int,int> m;
    int largest = 0;
    for(int i=0;i<len;i++)
    {
        int val = m[arr[i]];
        if(val != 0)
        {
            if(largest < val)
                largest=val;
        }
        else
            m[arr[i]] = MAX - i;
    }
    if(largest == 0)
        return -1;
    return MAX - largest;
}

int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    cout<<FindIn(arr,k)<<endl;
    return 0;
}
