#include<iostream>
using namespace std;
bool isSortedAscending(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    if (isSortedAscending(arr, size)) {
        std::cout << "The array is sorted in ascending order." << std::endl;
    } else {
        std::cout << "The array is not sorted in ascending order." << std::endl;
    }

    return 0;
}