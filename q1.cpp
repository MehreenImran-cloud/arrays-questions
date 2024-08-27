#include<iostream>
using namespace std;
int sumOfArray (int arr[],int size)
{

int sum=0;

for (int i=0;i< size ;i++)
{
sum +=arr[i];

}
 return sum;
}

int main()
 {
    int arr[] = {10, 20, 30, 40, 50}; 
    int size = sizeof(arr) / sizeof(arr[0]);

 int totalSum = sumOfArray(arr, size);
    std::cout << "The sum of all elements in the array is: " << totalSum << std::endl;

    return 0;
}