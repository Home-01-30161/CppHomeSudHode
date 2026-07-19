#include<bits/stdc++.h>
using namespace std; 

int main(){
    int r;
    cin >> r;

    for(int i=1; i<=r; i++){
        for(int col=1; col<=r; col++){
            if(col%3==0){
                cout<<'x';
            }
            else{
                cout<<'-';
            }
        }
        cout << endl; 
    }
    return 0;
}
