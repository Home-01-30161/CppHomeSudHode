#include<bits/stdc++.h>
using namespace std; 

int main(){
    int r;
    cin >> r;
    
    for(int i=1; i<=(3*r); i++){ //row
        for(int col = 1; col <= (3 * r); col++){ //collumn
			
			if(i>r && i<=(2*r)){ //center center
                cout << 'x';
            }
            
			else { //up,down(l,r)
                if(col<=r || col>(2*r)){//(l v r)
                    cout<<'x';
                } else { //u d center
                    cout<<' '; 
                }
            }
        }
        cout << endl; 
    }
}
