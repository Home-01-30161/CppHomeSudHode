#include<bits/stdc++.h>
using namespace std; 

int main(){
	int r, k=0;
	char l='a';
	cin>>r;
	for(int i=1; i<=r; i++){
		for(int col=1; col<=r; col++){
			if(k%2==0){
				cout<<'x';
			}
			else{
				cout<<'o';
			}
			l++;
			k++;
			if(k%r==0){
				cout<<endl;
			}
			
		}
	
	}
}
