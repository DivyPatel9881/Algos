//Edit distance problem.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int> ,int> MinS;
int Min(int a,int b){
    return a<b?a:b;
}
int MinSteps(char arr1[],char arr2[],int n1,int n2){
    pair<int,int > p;
    p.first = n1;
    p.second = n2;
    int k = MinS[p];
    if(k!=0)
        return k;
    else{
        if(n1==0){
            MinS[p] = n2;
            return n2;
        }
        else if(n2==0){
            MinS[p] = n1;
            return n1;
        }
        else if(arr1[n1-1]==arr2[n2-1]){
            MinS[p] = MinSteps(arr1,arr2,n1-1,n2-1);
            return MinS[p];
        }
        else{
            MinS[p] = 1 + Min(MinSteps(arr1,arr2,n1,n2-1),Min(MinSteps(arr1,arr2,n1-1,n2-1),MinSteps(arr1,arr2,n1-1,n2)));
            return MinS[p];
        }
    }
}
int main(){
    char arr1[100];
    char arr2[100];
    cin>>arr1;
    getchar();
    cin>>arr2;
    cout<<MinSteps(arr1,arr2,strlen(arr1),strlen(arr2))<<endl;
    return 0;
}
