#include<bits/stdc++.h>	
using namespace std;	

int main () {	  
  	string s;	  
  	cin >> s;	  
  	int n = s.size();	
  	for (int i=0; i<n; i++) {//1
  		if(i%3 == 2){
  			cout<<"..*.";
	  	}	    
		else{
			cout<<"..#.";
		}
		cout<<"."<<endl; //last
	}
	
  	for (int i=0; i<n; i++) {//2  
    	if(i%2==0){
  			cout<<".*.*";
	  	}	    
		else{
			cout<<".#.#";
		}
		cout<<"."<<endl; //last	
  	}
  	
  	for (int i=0; i<n; i++) {//3 hardest
    	if(i%2==0 || (i-1)%3==0){
  			cout<<"*."<<s[i]<<".";
	  	}	    
		else{
			cout<<"#."<<s[i]<<".";
		}
		if(i%3==0){
		cout<<"*"<<endl; //last	
  		}
  	}
  	for (int i=0; i<n; i++) {//4  
    	if(i%2==0){
  			cout<<".*.*";
	  	}	    
		else{
			cout<<".#.#";
		}
		cout<<"."<<endl; //last	
  	}
  	
  	for (int i=0; i<n; i++) {//5
  		if(i%3 == 2){
  			cout<<"..*.";
	  	}	    
		else{
			cout<<"..#.";
		}
		cout<<"."<<endl; //last
	}
	
	
  	
}
