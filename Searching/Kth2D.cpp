#include<bits/stdc++.h>
using namespace std;
struct entity{
    int val,row,col;
};
void Swap(struct entity &a,struct entity &b)
{
    struct entity temp=a;
    a=b;
    b=temp;
}
void Heapify(struct entity arr[],int len,int a)
{
    int l=2*a+1;
    int r=2*a+2;
    int small=-1;
    if(l<=len&&r<=len)
    {
        if(arr[l].val>arr[r].val)
        {
            if(arr[r].val<arr[a].val)
                small = r;
        }
        else
        {
            if(arr[l].val<arr[a].val)
                small = l;
        }
    }
    else if(l<=len){
        if(arr[l].val<arr[a].val)
            small = l;
    }
    if(small!=-1)
    {
        Swap(arr[small],arr[a]);
        Heapify(arr,len,small);
    }
}
int Find(struct entity arr[100][100],int a,int b,int k)
{
    int Final;
    struct entity * temp = arr[0];
    for(int i=0;i<k;i++){
        Final = temp[0].val;
        int r=temp[0].row, c=temp[0].col;
        temp[0] = arr[r+1][c];
        Heapify(temp,b,0);
    }
    return Final;
}
int main(){
    int r,c;
    cout<<"Enter row and column : ";
    cin>>r>>c;
    struct entity arr[100][100];
    for(int i=0;i<r;i++)
        for(int j=0;j<c;j++)
        {
            cin>>arr[i][j].val;
            arr[i][j].row=i;
            arr[i][i].col=j;
        }
    cout<<"Enter k : ";
    int k;
    cin>>k;
    cout<<Find(arr,r,c,k)<<endl;
    return 0;
}
