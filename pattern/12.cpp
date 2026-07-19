#include<bits/stdc++.h>
using namespace std; 

int main(){
	int r, k=0;
	char l='a';
	cin>>r;
	for(int i=1; i<=r; i++){
		int thres=1;
		for(int col=1; col<=r; col++){
			if(thres==1){
				cout<<'y';
			}
			else if(thres==2){
				cout<<'+';
			}
			else{
				cout<<'x';
			}
			thres+=1;
			l++;
			k++;
			if(thres==3){
				thres=0;
			}
			if(k%r==0){
				cout<<endl;
			}
			
		}
	
	}
}
