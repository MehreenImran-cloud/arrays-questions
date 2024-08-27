#include <iostream>
#include <climits> 
int findSecondLargest(int arr[], int size) {
    if (size < 2) {
        std::cerr << "Array must have at least two elements" << std::endl;
        return -1;
    }

    int largest = INT_MIN;
    int secondLargest = INT_MIN;

    for (int i = 0; i < size; ++i) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest && arr[i] != largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        std::cerr << "No second largest element found" << std::endl;
        return -1; 
    }

    return secondLargest;
}

int main() {
    int arr[] = {10, 5, 20, 20, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    int result = findSecondLargest(arr, size);

    if (result != -1) {
        std::cout << "The second largest element is: " << result << std::endl;
    }

    return 0;
}