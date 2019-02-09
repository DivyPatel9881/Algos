#include<iostream>
using namespace std;
struct Three {
    int arr[3];
};
struct Three ThreeLargest(int arr[],int len){
    struct Three a;
    a.arr[0]=0;
    a.arr[1]=0;
    a.arr[2]=0;
    for(int i=0;i<len;i++)
    {
        if(a.arr[0]<arr[i])
        {
            a.arr[2]=a.arr[1];
            a.arr[1]=a.arr[0];
            a.arr[0]=arr[i];
        }
        else if(a.arr[1]<arr[i])
        {
            a.arr[2]=a.arr[1];
            a.arr[1]=arr[i];
        }
        else if(a.arr[2]<arr[i])
            a.arr[2]=arr[i];
    }
    return a;
}
int main(){
    int k;
    int arr[100];
    cout<<"Enter a number : ";
    cin>>k;
    for(int i=0;i<k;i++)
        cin>>arr[i];
    struct Three t = ThreeLargest(arr,k);
    cout<<t.arr[0]<<" "<<t.arr[1]<<" "<<t.arr[2]<<endl;
    return 0;
}
