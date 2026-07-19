#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i=1; i<=n; i++) { //i=taew j=lak
        for (int j=1; j<=n; j++) {
            if (i==1 || i==n|| j==1 || j==n) {
                cout << "x";
            }
            else if (i==j || i+j==n+1) {
                cout << "a";
            }
            else {
                cout << " ";
            }
        }
        cout << endl;
    }
}
