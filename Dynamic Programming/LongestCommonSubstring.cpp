//Longest Common substring.
#include<bits/stdc++.h>
using namespace std;
map <pair<int,int>,int> M;
int LongestCommonSub(char str1[],char str2[]){
    int len1=strlen(str1);
    int len2=strlen(str2);
    pair<int,int > p;
    for(int i=0;i<=len1;i++)
    {
        p.first=i;
        p.second=0;
        M[p]=0;
    }
    for(int i=0;i<=len2;i++)
    {
        p.first=0;
        p.second=i;
        M[p]=0;
    }
    int Max=0;
    for(int i=1;i<=len1;i++){
        for(int j=1;j<=len2;j++){
            p.first=i;
            p.second=j;
            if(str1[i-1]==str2[j-1])
            {
                pair<int,int> p1;
                p1.first=i-1;
                p1.second=j-1;
                M[p] = M[p1]+1;
                if(Max<M[p])
                    Max=M[p];
            }
            else
                M[p]=0;
        }
    }
    return Max;
}
int main(){
    char str1[100];
    char str2[100];
    cin>>str1;
    getchar();
    cin>>str2;
    cout<<LongestCommonSub(str1,str2)<<endl;
    return 0;
}
