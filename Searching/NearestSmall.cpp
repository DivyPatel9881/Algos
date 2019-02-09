#include<bits/stdc++.h>
using namespace std;
struct Stack{
    int arr[100];
    int top=-1;
};
bool Empty(struct Stack &s){
    if(s.top==-1)
        return true;
    return false;
}
void Push(struct Stack &s,int a)
{
    s.arr[++s.top] = a;
}
int Pop(struct Stack &s)
{
    if(Empty(s))
        return -1;
    return s.arr[s.top--];
}
int Top(struct Stack &s)
{
    return s.arr[s.top];
}
void FindNearSmall(int arr[],int len){
    int i=0;
    struct Stack s;
    while(i<=len-1)
    {
        if(Empty(s))
            cout<<"_ , ";
        else
        {
            while(!Empty(s) && Top(s)>arr[i])
                int a = Pop(s);
            if(Empty(s))
                cout<<"_ , ";
            else
                cout<<Top(s)<<" , ";
        }
        Push(s,arr[i]);
        i++;
    }
}
int main(){
    int k;
    cout<<"Enter a number : ";
    cin>>k;
    int arr[100];
    for(int i=0;i<k;i++)
        cin>>arr[i];
    FindNearSmall(arr,k);
    return 0;
}
