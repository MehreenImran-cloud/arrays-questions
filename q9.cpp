#include <iostream>

void sumEvenOdd(int arr[], int size, int &evenSum, int &oddSum) {
    evenSum = 0;
    oddSum = 0;
    
    for (int i = 0; i < size; ++i) {
        if (arr[i] % 2 == 0) {
            evenSum += arr[i];
        } else {
            oddSum += arr[i];
        }
    }
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int size = sizeof(arr) / sizeof(arr[0]);
    int evenSum, oddSum;

    sumEvenOdd(arr, size, evenSum, oddSum);

    std::cout << "Sum of even elements: " << evenSum << std::endl;
    std::cout << "Sum of odd elements: " << oddSum << std::endl;

    return 0;
}