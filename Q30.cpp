#include <bits/stdc++.h>
using namespace std;

void merge(int arr[], int low, int mid, int high) {
    vector<int> temp;
    int i = low, j = mid + 1;

    while (i <= mid && j <= high) {
        if (arr[i] <= arr[j]) {
            temp.push_back(arr[i++]);
        } else {
            temp.push_back(arr[j++]);
        }
    }

    while (i <= mid) {
        temp.push_back(arr[i++]);
    }
    while (j <= high) {
        temp.push_back(arr[j++]);
    }

    for (int k = low; k <= high; k++) {
        arr[k] = temp[k - low];
    }
}

void merge_sort(int a[], int low, int high) {
    if (low >= high) return;

    int mid = low + (high - low) / 2; 
    merge_sort(a, low, mid);
    merge_sort(a, mid + 1, high);
    merge(a, low, mid, high);
}

int main() {
    int n;
    cin >> n;
    if (n <= 0) return 0;

    vector<int> arr(n); 
    for (int j = 0; j < n; j++) {
        cin >> arr[j];
    }

    cout << "Original Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    merge_sort(arr.data(), 0, n - 1);

    cout << "Sorted Array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << "\n";

    return 0;
}