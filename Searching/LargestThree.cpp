//Find three largest elements in an array.
#include<iostream>
using namespace std;
struct Triplet{
    int a,b,c;
};
struct Triplet FindLargest3(int arr[],int n){
    int l1=0,l2=0,l3=0;
    for(int i=0;i<n;i++){
        if(arr[i]>l1)
        {
            l3=l2;
            l2=l1;
            l1=arr[i];
        }
        else if(arr[i]>l2)
        {
            l3=l2;
            l2=arr[i];
        }
        else if(arr[i]>l3)
            l3=arr[i];
    }
    struct Triplet t;
    t.a=l1;
    t.b=l2;
    t.c=l3;
    return t;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    struct Triplet t=FindLargest3(arr,n);
    cout<<t.a<<" "<<t.b<<" "<<t.c<<endl;
    return 0;
}
