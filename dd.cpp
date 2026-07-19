#include <iostream>
using namespace std;

int main() {
    int n;
    cin>>n;
    for (int i=1; i<=n; i++) {
        for (int j = 0; j < i; j++) {
            cout << 'x';
        }
        for (int j=0; j<2 * (n-i); j++) {
            cout << ' ';
        }
        for (int j=0; j<i; j++) {
            cout << 'X';
        }
        cout << endl;
    }
}
