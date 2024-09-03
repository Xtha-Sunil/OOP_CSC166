// Create a dynamic array and input some numbers. Select one number from array of some index i.
// Now you must reposition the elements of array in such a way that all the elements before the ith
// element must be lesser than ith element and all the elements after ith elements must be greater than
// ith element.

#include <iostream>

using namespace std;

void swap(int& i, int&j) {
    int temp = i;
    i = j;
    j = temp;
}

int indexSort(int arr[], int left, int right) {
    int pivot = arr[right];
    int i = left -1;

    for(int j = left; j < right; j++) {
        if(arr[j] <= pivot) {
            i++;
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[right]);
    return i + 1;
}

int main() {
    
    int n, index;
    cout << "Enter number of elements to be sorted : ";
    cin >> n;
    int* arr = new int[n];

    for(int i = 0; i< n ; i++) {
        cin >> arr[i];
    }

    cout << "Enter an index to reposition the array : ";
    cin >> index;
    
    swap(arr[index], arr[n-1]);
    indexSort(arr, 0, n-1);

    cout << "Repositioned : ";
    for(int i = 0; i< n ; i++) {
        cout << arr[i] << " ";
    }

    delete[] arr;
    return 0;
}