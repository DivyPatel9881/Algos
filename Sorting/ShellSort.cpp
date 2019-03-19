//Shell Sort
#include<iostream>
using namespace std;
void Swap(int &a,int &b){
    int t=a;
    a=b;
    b=t;
}
int Ceil(int a){
    if(a%2!=0)
        return (a+1)/1;
    return a/2;
}
void ShellSort(int arr[],int n){
    int step = Ceil(n);
    for(;;step=Ceil(step)){
        for(int i=0;i<=n-step-1;i++)
            if(arr[i]>arr[i+step])
                Swap(arr[i],arr[i+step]);
        if(step==1)
            break;
    }
}
int main(){
    int n;
    int arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    ShellSort(arr,n);
    for(int i=0;i<n;i++)
        cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}
