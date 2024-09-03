// Write a program overloading function sort() to sort an array of integers, characters as well as floating
// point numbers(Use any sorting algorithm)

#include <iostream>

using namespace std;

// Swappping referenced data types because I have to change the swappped parameterized elements
template <typename T>
void swapp(T& i, T& j) {
    T temp = i;
    i = j;
    j = temp;
}

// Partitioning to create a pivot right in the middle
template <typename T>
int partition(T arr[], int left, int right) { 
    T pivot = arr[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (arr[j] <= pivot) {
            i++;
            swapp(arr[i], arr[j]);
        }
    }
    swapp(arr[i + 1], arr[right]);
    return i + 1;
}

// Recursion function for quickSorting the array
template <typename T>
void quickSort(T arr[], int left, int right) {
    if (left < right) {
        int partitionIndex = partition(arr, left, right);

        quickSort(arr, left, partitionIndex - 1);
        quickSort(arr, partitionIndex + 1, right);
    }
}

int main() {
    int intArr[] = {2, 54, 1, 5, 52};
    float floatArr[] = {2.5, 54.1, 1.2, 5.6, 52.0};
    
    int intLength = sizeof(intArr) / sizeof(intArr[0]);
    int floatLength = sizeof(floatArr) / sizeof(floatArr[0]);

    quickSort(intArr, 0, intLength - 1);
    quickSort(floatArr, 0, floatLength - 1);

    cout << "Sorted integer array: ";
    for (int i = 0; i < intLength; i++) {
        cout << intArr[i] << " ";
    }
    cout << endl;

    cout << "Sorted float array: ";
    for (int i = 0; i < floatLength; i++) {
        cout << floatArr[i] << " ";
    }
    cout << endl;

    return 0;
}
