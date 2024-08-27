#include <iostream>
using namespace std;

void countEvenOdd(int arr[], int size, int &evenCount, int &oddCount) {
    evenCount = 0;
    oddCount = 0;

    for (int i = 0; i < size; i++) {
        if (arr[i] % 2 == 0) {
            evenCount++;
        } else {
            oddCount++;
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenCount, oddCount;

    countEvenOdd(arr, size, evenCount, oddCount);

    cout << "Even numbers: " << evenCount << endl;
    cout << "Odd numbers: " << oddCount << endl;

    return 0;
}