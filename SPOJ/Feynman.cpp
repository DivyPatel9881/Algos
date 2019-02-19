#include <bits/stdc++.h>
using namespace std;
int main() {
	int k;
	do{
		cin>>k;
		if(k==0)
			break;
		cout<<k*(k+1)*(2*k+1)/6<<endl;
	}while(true);
	return 0;
}
