//Pretty printing.
#include<bits/stdc++.h>
#define MAX 53673256
using namespace std;
map<int,int> MinW;
int MinWeight(int arr[],int n,int m,int i){
    int k = MinW[i];
    if(k!=0)
        return k;
    else{
        if(i>=n)
        {
            MinW[i] = 0;
            return 0;
        }
        else{
            int num =i+1;
            int len = arr[num-1];
            int Min = MAX;
            while(num<=n && len<=m){
                int val = pow(m-len,2) + MinWeight(arr,n,m,num);
                num++;
                len++;
                len+=arr[num-1];
                if(Min>val)
                    Min = val;
            }
            MinW[i] = Min;
            return Min;
        }
    }
}
int main(){
    int n;//Number of words in a sequence.
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++)
        cin>>arr[i];
    int maxLineLen;//Maximum line length.
    cin>>maxLineLen;
    cout<<MinWeight(arr,n,maxLineLen,0)<<endl;
    return 0;
}
