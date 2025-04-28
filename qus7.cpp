#include <iostream>
using namespace std;

int main() {
    int rows = 7;
    int cols = 5;

    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (j == 0) {
                cout << "* ";
            }
            else if ((i == 0 || i == 3) && j < cols-1) {
                cout << "* ";
            }
            else if (j == cols-1 && i > 0 && i < 3) {
                cout << "* ";
            }
            else {
                cout << "  ";
            }
        }
        cout << endl;
    }

    return 0;
}
