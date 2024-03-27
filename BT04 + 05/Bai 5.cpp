
#include <iostream>
#include <vector>

using namespace std;

void printSpiralMatrix(int x, int y) {
    vector<vector<int>> matrix(x, vector<int>(y, 0));
    int currentNumber = 1;
    int top = 0, bottom = x - 1, left = 0, right = y - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++) {
            matrix[top][i] = currentNumber++;
        }
        top++;

        for (int i = top; i <= bottom; i++) {
            matrix[i][right] = currentNumber++;
        }
        right--;

        if (top <= bottom) {
            for (int i = right; i >= left; i--) {
                matrix[bottom][i] = currentNumber++;
            }
            bottom--;
        }

        if (left <= right) {
            for (int i = bottom; i >= top; i--) {
                matrix[i][left] = currentNumber++;
            }
            left++;
        }
    }

    for (int i = 0; i < x; i++) {
        for (int j = 0; j < y; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

int main() {
    int x, y;
    cout << "Enter two positive integers x and y (both less than 10): ";
    cin >> x >> y;

    if (x < 1 || y < 1 || x >= 10 || y >= 10) {
        cout << "Invalid input. Please enter positive integers less than 10." << endl;
    } else {
        printSpiralMatrix(x, y);
    }

    return 0;
}
