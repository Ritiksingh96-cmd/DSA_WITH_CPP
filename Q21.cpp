#include <iostream>
using namespace std;

constexpr int MAX = 5;

void rotateRowsRight(int arr[][MAX], int n, int k) {
    if (n <= 0) return;

    int shift = k % n;
    if (shift < 0) shift += n; // Handles negative k if ever passed
    if (shift == 0) return;

    int temp[MAX];
    for (int i = 0; i < n; i++) {
        // Place each element at its new shifted column index
        for (int j = 0; j < n; j++) {
            temp[(j + shift) % n] = arr[i][j];
        }
        // Copy rotated row back into arr
        for (int j = 0; j < n; j++) {
            arr[i][j] = temp[j];
        }
    }
}

void printMatrix(int arr[][MAX], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << arr[i][j] << " ";
        }
        cout << "\n";
    }
}

int main() {
    constexpr int n = 5;
    int k = 3;
    int arr[n][MAX] = {
        {3, 4, 5, 4, 5},
        {5, 5, 3, 4, 5},
        {3, 4, 5, 2, 2},
        {7, 9, 0, 7, 2},
        {4, 2, 1, 4, 5}
    };

    rotateRowsRight(arr, n, k);

    cout << "Matrix after rotating each row right by " << k << ":\n";
    printMatrix(arr, n);

    return 0;
}