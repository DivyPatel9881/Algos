#include<bits/stdc++.h>
using namespace std;
int Abs(int i)
{
    if(i<0)
        return -i;
    return i;
}
int CrossOver(int arr[],int l,int h,int a)
{
    int k=(l+h)/2;
    if(h-l>1)
    {
        if(arr[k]==a)
            return k;
        else if(arr[k]>a)
            return CrossOver(arr,l,k,a);
        else if(arr[k]<a)
            return CrossOver(arr,k,h,a);
    }
    return l;
}
void FindAll(int arr[],int len,int o,int k)
{
    int c = CrossOver(arr,0,len-1,o);
    int Arr[100];
    int len1 = 0;
    if(arr[c]==o)
    {
        int l=c-1 , h=c+1;
        while(l>=0 && h<=len-1 && len1<k)
        {
            int diff1 = Abs(o-arr[l]);
            int diff2 = Abs(o-arr[h]);
            if(diff1>diff2)
                Arr[len1++] = arr[h++];
            else
                Arr[len1++] = arr[l--];
        }
        while(l>=0 && len<k)
            Arr[len1++]=arr[l--];
        while(h<=len-1 && len1<k)
            Arr[len1++]=arr[h++];
    }
    else
    {
        int l=c,h=c+1;
        while(l>=0 && h<=len-1 && len1<k)
        {
            int diff1 = Abs(o-arr[l]);
            int diff2 = Abs(o-arr[h]);
            if(diff1>diff2)
                Arr[len1++]=arr[h++];
            else
                Arr[len1++]=arr[l--];
        }
        while(l>=0 && len1<k)
            Arr[len1++]=arr[l--];
        while(h<=len-1 && len1<k)
            Arr[len1++]=arr[h++];
    }
    for(int i=0;i<k;i++)
        cout<<Arr[i]<<endl;
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    int num1,num2;
    cout<<"Enter number and k : ";
    cin>>num1>>num2;
    FindAll(arr,k,num1,num2);
    return 0;
}
