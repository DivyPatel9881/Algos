//Philosopher's stone.
#include<iostream>
using namespace std;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxPath(int arr[][100],int m,int n){
    int arr1[100][100];
    for(int i=0;i<n;i++)
        arr1[0][i] = arr[0][i];
    for(int i=1;i<m;i++){
        for(int j=0;j<n;j++){
            if(j>0 && j<n-1)
                arr1[i][j] = arr[i][j] + Max(arr1[i-1][j+1],Max(arr1[i-1][j-1],arr1[i-1][j]));
            else if(j==0)
                arr1[i][j] = arr[i][j] + Max(arr1[i-1][j],arr1[i-1][j+1]);
            else if(j==n-1)
                arr1[i][j] = arr[i][j] + Max(arr1[i-1][j-1],arr1[i-1][j]);
            else
                arr1[i][j] = arr[i][j] + arr1[i-1][j];
        }
    }
    int M=0;
    for(int i=0;i<n;i++)
        if(M<arr1[m-1][i])
            M=arr1[m-1][i];
    return M;
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        int m,n;
        cin>>m>>n;
        int arr[100][100];
        for(int j=0;j<m;j++)
            for(int k=0;k<n;k++)
                cin>>arr[j][k];
        cout<<MaxPath(arr,m,n)<<endl;
    }
    return 0;
}
