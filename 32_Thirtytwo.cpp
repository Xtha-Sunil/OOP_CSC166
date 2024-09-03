// 32. Write a program that uses a function template for sorting the different data in an array. You can use
// any sorting algorithm in function template.

#include <iostream>

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n - 1; ++i) {
        for (int j = 0; j < n - 1 - i; ++j) {
            if (arr[j] > arr[j + 1]) {
                T temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

template <typename T>
void displayArray(T arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int intArray[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(intArray) / sizeof(intArray[0]);
    std::cout << "Unsorted integer array: ";
    displayArray(intArray, n);

    bubbleSort(intArray, n);
    std::cout << "Sorted integer array: ";
    displayArray(intArray, n);

    char charArray[] = {'z', 'a', 'h', 'p', 'b'};
    int m = sizeof(charArray) / sizeof(charArray[0]);
    std::cout << "\nUnsorted character array: ";
    displayArray(charArray, m);

    bubbleSort(charArray, m);
    std::cout << "Sorted character array: ";
    displayArray(charArray, m);
    
    return 0;
}