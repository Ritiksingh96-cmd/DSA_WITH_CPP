#include <iostream>
using namespace std;

const int m = 5; 

void diagsum(int arr[][m], int n) {
    int sum = 0; 

    for (int i = 0; i < n; i++) {
        sum += arr[i][i];
        if (i != n - 1 - i) {
            sum += arr[i][n - 1 - i];
        }
    }

    cout << "Sum of Diagonals is: " << sum << endl;
}

int main() {
    const int n = 5; 
    int arr[n][n] = {
        {3, 7, 8, 9, 9},
        {6, 9, 9, 6, 8},
        {1, 2, 3, 4, 5},
        {5, 4, 3, 2, 1},
        {9, 8, 7, 6, 5}
    };

    diagsum(arr, n);
    return 0;
}