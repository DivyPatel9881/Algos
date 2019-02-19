#include <bits/stdc++.h>
using namespace std;
int main() {
	while(true){
		int t;
		cin>>t;
		if(t==-1)
            break;
		int sum=0;
		int *arr = new int[t];
		for(int i=0;i<t;i++){
			cin>>arr[i];
			sum+=arr[i];
		}
		if(sum%t!=0)
			cout<<-1<<endl;
		else{
			int k=sum/t;
			int l=0;
			for(int i=0;i<t;i++)
				if(arr[i]>k)
					l+=arr[i]-k;
			cout<<l<<endl;
		}
	}
	return 0;
}
