#include <iostream>
using namespace std;

int main() {
    for(int i = 5; i >= 1; i--) {
        for(int j = 1; j <= i; j++) {
            cout << ((j % 2 == 0) ? 0 : 1) << " ";
        }
        cout << endl;
    }
    return 0;
}
