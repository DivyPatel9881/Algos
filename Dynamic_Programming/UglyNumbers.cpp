#include<bits/stdc++.h>
using namespace std;
map<int,int> ugly;
int KthUglyNum(int n){
    int l2=1,l3=1,l5=1;
    ugly[1] = 1;
    int in=1;
    while(in!=n){
        int i=ugly[l2]*2;
        int j=ugly[l3]*3;
        int k=ugly[l5]*5;
        if(i<j){
            if(i<k){
                if(ugly[in]!=i)
                {
                    ugly[++in] = i;
                    l2++;
                }
                else
                    l2++;
            }
            else{
                if(ugly[in]!=k)
                {
                    ugly[++in] = k;
                    l5++;
                }
                else
                    l5++;
            }
        }
        else{
            if(j<k){
                if(ugly[in]!=j)
                {
                    ugly[++in] = j;
                    l3++;
                }
                else
                    l3++;
            }
            else{
                if(ugly[in]!=k)
                {
                    ugly[++in] = k;
                    l5++;
                }
                else
                    l5++;
            }
        }
    }
    for(int i=1;i<=n;i++)
        cout<<ugly[i]<<" ";
    cout<<endl;
    return ugly[n];

}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    cout<<KthUglyNum(k)<<endl;
    return 0;
}
