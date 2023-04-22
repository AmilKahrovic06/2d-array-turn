#include <iostream>
using namespace std;

int main() {
    int niz[4][4], i, j, b, niz2[4][4];
    
    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4; j++) {
            b++;
            niz[i][j] = b;
        }
    }

    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4; j++) {
            if (i % 2 == 0) {
                niz2[i][j] = niz[i][j];
            }
            else {
                niz2[i][j] = niz[i][4 - j - 1];
            }
        }
    }

    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4; j++) {
            cout << niz[i][j] << " ";
        }
        cout << endl;
    }

    cout << endl << endl;

    for (i = 0; i < 4; i++) { 
        for (j = 0; j < 4; j++) {
            cout << niz2[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
