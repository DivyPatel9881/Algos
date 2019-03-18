//Find Common elements in three sorted elements.
#include <bits/stdc++.h>
using namespace std;

vector<int> FindCommonElements(int arr1[],int n1,int arr2[],int n2,int arr3[],int n3){
    int l1=0,l2=0,l3=0;
    vector <int>v;
    while(l1<n1 && l2<n2 && l3<n3){
        if(arr1[l1]<arr2[l2])
            l1++;
        else if(arr1[l1]>arr2[l2])
            l2++;
        else if(arr1[l1]==arr2[l2])
        {
            while(arr2[l2]>arr3[l3])
                l3++;
            if(arr2[l2]==arr3[l3])
            {
                v.push_back(arr1[l1]);
                l1++;
                l2++;
                l3++;
            }
            else if(arr2[l2]<arr3[l3])
            {
                l1++;
                l2++;
            }
        }
    }
    return v;
}
int main(){
    int n1,n2,n3;
    cin>>n1;
    int arr1[100];
    for(int i=0;i<n1;i++)
        cin>>arr1[i];
    cin>>n2;
    int arr2[100];
    for(int i=0;i<n2;i++)
        cin>>arr2[i];
    cin>>n3;
    int arr3[100];
    for(int i=0;i<n3;i++)
        cin>>arr3[i];
    vector <int> v=FindCommonElements(arr1,n1,arr2,n2,arr3,n3);
    vector <int> ::iterator it;
    for(it = v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
