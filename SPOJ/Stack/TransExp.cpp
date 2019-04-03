//Transform the Expression
#include<bits/stdc++.h>
using namespace std;
struct Stack{
    char arr[100];
    int top=-1;
};
bool isEmpty(struct Stack &s){
    if(s.top==-1)
        return true;
    return false;
}
char Top(struct Stack &s){
    if(isEmpty(s))
        return -1;
    return s.arr[s.top];
}
char Pop(struct Stack &s){
    return s.arr[s.top--];
}
void Push(struct Stack &s, char a){
    s.arr[++s.top]=a;
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
    else if(a=='^')
        return 5;
}
void PrintPost(char arr[]){
    int i=0;
    struct Stack s;
    int len=strlen(arr);
    while(i<len){
        if(isalpha(arr[i]))
            cout<<arr[i++];
        else if(arr[i]=='(')
            Push(s,arr[i++]);
        else if(arr[i]==')'){
            while(Top(s)!='(')
                cout<<Pop(s);
            Pop(s);
            i++;
        }
        else{
            if(isEmpty(s) || Top(s)=='(')
                Push(s,arr[i++]);
            else{
                while(Precedence(Top(s))>=Precedence(arr[i]))
                    cout<<Pop(s);
                Push(s,arr[i++]);
            }
        }
    }
    while(!isEmpty(s)){
        cout<<Pop(s);
    }
    cout<<endl;
}
int main(){
    int t;
    cin>>t;
    char arr[500];
    for(int i=0;i<t;i++)
    {
        cin>>arr;
        PrintPost(arr);
    }
    return 0;
}
