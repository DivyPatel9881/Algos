// He is offside!
#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    while(n!=0 && m!=0){
        int arr1[100];
        int arr2[100];
        int m1=37327632;
        for(int j=0;j<n;j++)
        {
            cin>>arr1[j];
            if(m1>arr1[j])
                m1=arr1[j];
        }
        int M1=37327632;
        int M2=37327632;
        for(int j=0;j<m;j++){
            cin>>arr2[j];
            if(arr2[j]<M1){
                M2=M1;
                M1=arr2[j];
            }
            else if(arr2[j]<M2)
                M2=arr2[j];
        }
        if(m1>=M1 && m1>=M2)
            cout<<"N"<<endl;
        else
            cout<<"Y"<<endl;
        cin>>n>>m;
    }
    return 0;
}
