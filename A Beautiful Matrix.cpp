#include <iostream>
using namespace std;

int main() {
    int matrix[5][5];
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            cin >> matrix[i][j];
        }
    }
    int moves = 0;
    for(int i = 0; i < 5; i++) {
        for(int j = 0; j < 5; j++) {
            if(matrix[i][j] == 1 && (i != 2 || j != 2)) {
                moves = moves + abs(i - 2) + abs(j - 2);
                matrix[i][j] == matrix[2][2];
                matrix[2][2] = 1;

                break;
            }
        }

    }
    cout << moves << endl;

    return 0;
}
