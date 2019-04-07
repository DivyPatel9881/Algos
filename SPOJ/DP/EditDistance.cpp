//Edit distance.
#include<bits/stdc++.h>
using namespace std;
int Min(int a,int b){
    return a<b?a:b;
}
int MinSteps(char arr1[],char arr2[]){
    int len1 = strlen(arr1);
    int len2 = strlen(arr2);
    int ** arr = new int * [len1+1];
    for(int i=0;i<len1+1;i++)
        arr[i] = new int [len2+1];
    for(int i=0;i<=len1;i++)
        arr[i][0] = i;
    for(int i=0;i<=len2;i++)
        arr[0][i] = i;
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            if(arr1[i-1]==arr2[j-1])
                arr[i][j] = arr[i-1][j-1];
            else
                arr[i][j] = 1 + Min(arr[i-1][j-1],Min(arr[i-1][j],arr[i][j-1]));
        }
    }
    return arr[len1][len2];
}
int main(){
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        char arr1[2001];
        char arr2[2001];
        cin>>arr1;
        getchar();
        cin>>arr2;
        getchar();
        cout<<MinSteps(arr1,arr2)<<endl;
    }
    return 0;
}
