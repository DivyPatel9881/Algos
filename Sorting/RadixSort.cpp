#include<bits/stdc++.h>
using namespace std;
void Sort(int arr[],int len){
    int large=0;
    for(int i=0;i<len;i++)
        if(large<arr[i])
            large=arr[i];
    int nodig=0;
    while(large!=0)
    {
        large = large-(large%10);
        large/=10;
        nodig++;
    }
    cout<<nodig<<endl;
    for(int i=0 ; i<nodig ; i++)
    {
        int arr1[10][100];
        int num[10];
        for(int j=0;j<10;j++)
            num[j]=0;
        for(int j=0;j<len;j++)
        {
            int digit = arr[j] % int(pow(10,i+1));
            digit /= pow(10,i);
            arr1[digit][num[digit]++] = arr[j];
        }
        int in =0 ;
        for(int j=0;j<10;j++)
            for(int k=0;k<num[j] ;k++)
                arr[in++]=arr1[j][k];
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    Sort(arr,k);
    for(int i=0;i<k;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
