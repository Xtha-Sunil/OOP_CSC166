// Write a program using dynamic memory allocation to get input an array of numbers and find the
// sum of N numbers stored in the array using a function to compute the sum.

#include <iostream>

int sumArray(int arr[],int len) {
    int sum = 0;

    for(int i = 0; i < len; i++) {
        sum += arr[i];
    }

    return sum;
}

int main() {
    using namespace std;

    int len;
    cout << "Enter the length of the array : ";
    cin >> len;

    int* arr = new int[len];
    for(int i = 0; i < len; i++) {
        cout << "Enter for " << i  << "th element : ";
        cin >> arr[i];
    }

    int sum = sumArray(arr, len);
    cout << "Sum is : " << sum;

    delete[] arr;
    return 0;
}