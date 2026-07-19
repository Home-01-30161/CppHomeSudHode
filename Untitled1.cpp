#include<bits/stdc++.h>
using namespace std;

int main() {
    pair <string,string>a;
    pair <string,string>b;

    string type;
    cin>>type;
    cin>>a.first>>a.second;
    cin>>b.first>>b.second;

    int num1 = atoi(a.first.c_str()); 
    int num2 = atoi(a.second.c_str());  
    int num3 = atoi(b.first.c_str()); 
    int num4 = atoi(b.second.c_str()); 
    num1 -= '0', num2 -= '0', num3 -= '0', num4 -= '0';
    
	cout<<type<<" "<<"is out for "<<(num3-num1)<<"hr"<<" "<<(num4-num2);
}

