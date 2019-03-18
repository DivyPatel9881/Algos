//Given an array of integers, find the nearest smaller number for every element such that the smaller element is on left side
#include <bits/stdc++.h>
using namespace std;
struct Stack{
    int arr[100];
    int top=-1;
};
bool isEmpty(struct Stack &s)
{
    if(s.top==-1)
        return true;
    return false;
}
int Top(struct Stack &s){
    return s.arr[s.top];
}
int Pop(struct Stack &s){
    return s.arr[s.top--];
}
void Push(struct Stack &s, int a){
    s.arr[++s.top]=a;
}
vector <int>FindNearestLower(int arr[],int n){
    vector <int>v;
    struct Stack s;
    for(int i=0;i<n;i++){
        if(isEmpty(s))
        {
            v.push_back(-1);
            Push(s,arr[i]);
        }
        else
        {
            while(!isEmpty(s) && Top(s)>arr[i])
                Pop(s);
            if(isEmpty(s))
                v.push_back(-1);
            else
                v.push_back(Top(s));
            Push(s,arr[i]);
        }
    }
    return v;
}
int main()
{
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    vector <int>v=FindNearestLower(arr,n);
    vector <int>::iterator it;
    for(it=v.begin();it!=v.end();it++)
        cout<<*it<<" ";
    cout<<endl;
    return 0;
}
