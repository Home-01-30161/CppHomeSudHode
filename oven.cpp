#include<bits/stdc++.h>
using namespace std; 

int main(){
	string s;
	int x=0;
	cin>>s;
	for(int i=0; i<s.size(); i++){
		int current_val=s[i]-'0';
		if(i%4==0){
			x+=current_val;
		}
		else if(i%4==1){
			x-=current_val;
		}
		else if(i%4==2){
			x*=current_val;
		}
		else {
			x/=current_val;
		}
	}
	cout<<x;		
}
