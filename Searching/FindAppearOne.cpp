//Given a sorted array in which all elements appear twice (one after one) and one element appears only once. Find that element in O(log n) complexity.
#include <iostream>
using namespace std;
int FindAppearOne(int arr[],int l,int h){
    if(l<h){
        int k=(l+h)/2;
        if(k%2==0){
            if(k+1<=h && arr[k]==arr[k+1])
                return FindAppearOne(arr,k+2,h);
            else if(k-1>=l && arr[k-1]==arr[k])
                return FindAppearOne(arr,l,k-2);
            return arr[k];
        }
        else{
            if(k+1<=h && arr[k]==arr[k+1])
                return FindAppearOne(arr,l,k-1);
            else if(k-1>=l && arr[k-1]==arr[k])
                return FindAppearOne(arr,k+1,h);
            return arr[k];
        }
    }
    if(l==h)
        return arr[l];
    return -1;
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<FindAppearOne(arr,0,n-1)<<endl;
    return 0;
}
