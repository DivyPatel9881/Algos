//Maximum length chain.
#include<bits/stdc++.h>
using namespace std;
struct Pair{
    int a,b;
};
map<int,int> M;
int Max(int a,int b){
    return a>b?a:b;
}
int MaxLengthChain(struct Pair arr[],int n,int l,int p){
    if(l>n){
        M[l]=0;
        return 0;
    }
    else{
        if(arr[l-1].a>p){
            int k=M[l];
            if(k!=0)
                return k;
            else{
                M[p] = Max(MaxLengthChain(arr,n,l+1,arr[l-1].b)+1,MaxLengthChain(arr,n,l+1,p));
                return M[p];
            }
        }
        else{
            M[p]=MaxLengthChain(arr,n,l+1,p);
            return M[p];
        }
    }
}
int main(){
    int n;
    struct Pair arr[100];
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i].a>>arr[i].b;
    cout<<MaxLengthChain(arr,n,1,0)<<endl;
    return 0;
}
