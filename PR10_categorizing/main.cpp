#include <iostream>
using namespace std;

// Selection Sort
void selectionSort(int arr[], int n) {
    int i = 0;
    while (i < n - 1) {
        int minIndex = i;
        int j = i + 1;
        while (j < n) {
            if (arr[j] < arr[minIndex]) {
                minIndex = j;
            }
            j++;
        }

        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
        i++;
    }
}

// Merge function for Merge Sort
void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;
    int L[n1], R[n2];

    for (int i = 0; i < n1; i++) {
        L[i] = arr[left + i];
    }
    for (int j = 0; j < n2; j++) {
        R[j] = arr[mid + 1 + j];
    }

    int i = 0, j = 0, k = left;
    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) {
            arr[k] = L[i];
            i++;
        } else {
            arr[k] = R[j];
            j++;
        }
        k++;
    }
    while (i < n1) {
        arr[k] = L[i];
        i++;
        k++;
    }
    while (j < n2) {
        arr[k] = R[j];
        j++;
        k++;
    }
}

// Merge Sort
void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = (left + right) / 2;
        mergeSort(arr, left, mid);
        mergeSort(arr, mid + 1, right);
        merge(arr, left, mid, right);
    }
}

// Linear Search
int linearSearch(int arr[], int n, int key) {
    int i = 0;
    while (i < n) {
        if (arr[i] == key) {
            return i;
        }
        i++;
    }
    return -1;
}

// Binary Search
int binarySearch(int arr[], int left, int right, int key) {
    while (left <= right) {
        int mid = (left + right) / 2;
        if (arr[mid] == key) {
            return mid;
        } else if (arr[mid] < key) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return -1;
}

// Display Array
void display(int arr[], int n) {
    int i = 0;
    while (i < n) {
        cout << arr[i] << " ";
        i++;
    }
    cout << endl;
}

int main() {
    int choice = -1;
    int n, key;

    cout << "Enter number of elements: ";
    cin >> n;

    int arr[n], original[n];

    cout << "Enter elements:" << endl;
    int i = 0;
    while (i < n) {
        cin >> arr[i];
        original[i] = arr[i];
        i++;
    }

    while (choice != 0) {
        cout << endl;
        cout << "1. Selection Sort" << endl;
        cout << "2. Merge Sort" << endl;
        cout << "3. Linear Search" << endl;
        cout << "4. Binary Search (sorted array)" << endl;
        cout << "5. Display Original Array" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            selectionSort(arr, n);
            cout << "Array after Selection Sort: ";
            display(arr, n);
        }
        else if (choice == 2) {
            mergeSort(arr, 0, n - 1);
            cout << "Array after Merge Sort: ";
            display(arr, n);
        }
        else if (choice == 3) {
            cout << "Enter element to search (Linear): ";
            cin >> key;
            int pos = linearSearch(arr, n, key);
            if (pos != -1) {
                cout << key << " found at index " << pos << endl;
            } else {
                cout << key << " not found!" << endl;
            }
        }
        else if (choice == 4) {
            mergeSort(arr, 0, n - 1); // Sort before binary search
            cout << "Enter element to search (Binary): ";
            cin >> key;
            int pos = binarySearch(arr, 0, n - 1, key);
            if (pos != -1) {
                cout << key << " found at index " << pos << endl;
            } else {
                cout << key << " not found!" << endl;
            }
        }
        else if (choice == 5) {
            cout << "Original array: ";
            display(original, n);
        }
        else if (choice == 0) {
            cout << "Exiting program..." << endl;
        }
        else {
            cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
