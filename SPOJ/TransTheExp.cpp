#include<bits/stdc++.h>
using namespace std;
struct Stack{
    char arr[500];
    int top=-1;
};
char Top(struct Stack &s){
    return s.arr[s.top];
}
char Pop(struct Stack &s){
    return s.arr[s.top--];
}
void Push(struct Stack &s,char a){
    s.arr[++s.top]=a;
}
bool isEmpty(struct Stack &s){
    if(s.top==-1)
        return true;
    return false;
}
int Precedence(char a){
    if(a=='+')
        return 1;
    else if(a=='-')
        return 2;
    else if(a=='*')
        return 3;
    else if(a=='/')
        return 4;
    return 5;
}
void InToPre(char arr[],int len){
    struct Stack s;
    int i=0;
    while(i<=len-1){
        if(isalpha(arr[i]))
            cout<<arr[i++];
        else if(arr[i]=='(' || isEmpty(s))
            Push(s,arr[i++]);
        else if(arr[i]==')')
        {
            while(Top(s)!='('){
                cout<<Pop(s);
            }
            Pop(s);
            i++;
        }
        else{
            while(!isEmpty(s) && Top(s)!='(' && Precedence(arr[i])<=Precedence(Top(s))){
                cout<<Pop(s);
            }
            Push(s,arr[i++]);
        }
    }
    while(!isEmpty(s))
        cout<<Pop(s);
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    char arr[500];
    for(int i=0;i<t;i++)
    {
        cin>>arr;
        int len = strlen(arr);
        InToPre(arr,len);
    }
    return 0;
}
