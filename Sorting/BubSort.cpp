#include<bits/stdc++.h>
using namespace std;
void Swap(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
}
void Sort(int arr[],int len){
    for(int i=0;i<len-1;i++)
    {
        int flag=0;
        for(int j=0;j<=len-2-i;j++){
            if(arr[j]>arr[j+1])
            {
                Swap(&arr[j],&arr[j+1]);
                flag=1;
            }
        }
        if(flag==0)
            break;
    }
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
