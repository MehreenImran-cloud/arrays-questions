#include<iostream>
using namespace std;

double calculateAverage (int arr[],int size)
{
if (size ==0)
{

   return 0;
}
int sum =0;
for (int i=0; i< size ; i++)
{
sum +=arr[i];
}
        
    return static_cast<double>(sum) / size;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int size = sizeof(arr) / sizeof(arr[0]);
    
    double average = calculateAverage(arr, size);
    
    std::cout << "The average is: " << average << std::endl;
    
    return 0;
}
