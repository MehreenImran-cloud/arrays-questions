#include<iostream>
using namespace std;


int productOfArray(int arr[], int size)
 {
    int product = 1; 
    for(int i = 0; i < size; i++) 
    {
        product *= arr[i]; 
    }
    return product; 
}

int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int size = sizeof(arr) / sizeof(arr[0]);

    int product = productOfArray(arr, size);

  cout << "Product of elements in array: " << product << endl;

    return 0;
}