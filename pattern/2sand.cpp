#include<bits/stdc++.h>
using namespace std; 

int main(){
    int r;
    cin >> r;

    for(int i = 1; i <= r; i++){
        for(int col = 1; col <= i; col++){
            cout << 'a';
        }
        for(int col = r; col >= i; col--){
            cout << 'b';
        }
        for(int col = 1; col <= (r - i + 1); col++){
            cout << 'c';
        }
        for(int col = 1; col <= i; col++){
            cout << 'd';
        }
        cout << endl; 
    }
}
