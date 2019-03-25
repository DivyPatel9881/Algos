//Count Distinct occurences as a subsequence.
#include<bits/stdc++.h>
using namespace std;
map<pair<int,int>,int> CountSub;
int Count(char arr1[],int l1,char arr2[],int l2){
    if(l1>0&&l2>0){
        pair<int,int> p;
        p.first = l1;
        p.second = l2;
        int k = CountSub[p];
        if(k!=0)
            return k;
        else{
            if(arr1[l1-1]==arr2[l2-1]&&l2==1)
            {
                CountSub[p] = Count(arr1,l1-1,arr2,l2)+1;
                return CountSub[p];
            }
            else if(arr1[l1-1]==arr2[l2-1])
            {
                CountSub[p] = Count(arr1,l1-1,arr2,l2-1)+Count(arr1,l1-1,arr2,l2);
                return CountSub[p];
            }
            else{
                CountSub[p] = Count(arr1,l1-1,arr2,l2);
                return CountSub[p];
            }
        }
    }
    return 0;
}
int CountDisSub(char arr1[],char arr2[]){
    int len1=strlen(arr1);
    int len2=strlen(arr2);
    return Count(arr1,len1,arr2,len2);
}
int main(){
    char arr1[100];
    char arr2[100];
    cin>>arr1;
    getchar();
    cin>>arr2;
    cout<<CountDisSub(arr1,arr2)<<endl;
    return 0;
}
