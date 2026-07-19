#include<bits/stdc++.h>
using namespace std; 

int main(){
	int r;
	cin>>r;
	for(int i=1; i<=r; i++){
		for(int sp=1; sp<=(r-i); sp++){
			cout<<" ";
		}
		for(int d=1; d<=((2*i)-1); d++){
			cout<<"*";
		}
		cout<<endl;
	}
}
