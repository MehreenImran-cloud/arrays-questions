#include<iostream>
using namespace std;

int findMaxvalue (int arr[],int size)
{

    int max = arr[0];  // Assume first element is the maximum
    for(int i = 1; i < size; i++) {
        if(arr[i] > max) {
            max = arr[i];  // Update max if current element is greater
        }
    }
    return max;
}

int main() {
    int arr[] = {10, 20, 5, 25, 15};
    int size = sizeof(arr)/sizeof(arr[0]);
    int maxVal = findMaxvalue(arr, size);
    cout << "The maximum value in the array is: " << maxVal << endl;
    return 0;
}