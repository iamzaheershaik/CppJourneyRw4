#include <iostream>

using namespace std;

class Node {
public:
    int value;
    Node* next;

    Node(int val) {
        this->value = val;
        this->next = nullptr;
    }
};

class LinkedList {
public:
    Node* head;
    int count;

    LinkedList() {
        head = nullptr;
        count = 0;
    }

    void insert(int val) {
        Node* newNode = new Node(val);

        if (head != nullptr) {
            Node* current = head;
            while (current->next != nullptr) {
                current = current->next;
            }
            current->next = newNode;
        } else {
            head = newNode;
        }
        count++;
        cout << "----- Node Added Successfully -----\n";
    }

    void display() {
        Node* current = head;
        if (current == nullptr) {
            cout << "The list is empty.\n";
            return;
        }
        cout << "Current List Elements:\n";
        while (current != nullptr) {
            cout << current->value << endl;
            current = current->next;
        }
    }

    void update(int index, int newValue) {
        if (index < 0 || index >= count) {
            cout << "----- Invalid Position: Index out of bounds! -----\n";
            return;
        }

        Node* current = head;
        for (int i = 0; i < index; i++) {
            current = current->next;
        }
        current->value = newValue;
        cout << "----- Node Updated Successfully -----\n\n";
    }

    void find(int val) {
        Node* current = head;
        int index = 0;
        bool found = false;

        while (current != nullptr) {
            if (current->value == val) {
                cout << "Element " << val << " found at index " << index << endl;
                found = true;
                break;
            }
            current = current->next;
            index++;
        }

        if (!found) {
            cout << "Element " << val << " not found in the list.\n";
        }
    }

    void remove(int index) {
        if (index < 0 || index >= count) {
            cout << "----- Cannot Remove: Index not found! -----\n";
            return;
        }

        Node* nodeToDelete;
        if (index == 0) {
            nodeToDelete = head;
            head = head->next;
        } else {
            Node* previous = head;
            for (int i = 0; i < (index - 1); i++) {
                previous = previous->next;
            }
            nodeToDelete = previous->next;
            previous->next = nodeToDelete->next;
        }

        delete nodeToDelete;
        count--;
        cout << "Node Deleted Successfully!\n";
    }
};

class LinkedListMenu {
public:
    LinkedList myList;
    int choice, index, value;

    void runMenu() {
        while (true) {
            cout << "\n--------------------------------------\n";
            cout << "       Linked List Operations\n";
            cout << "--------------------------------------\n";
            cout << "1. Add Element (to end)\n";
            cout << "2. View All Elements\n";
            cout << "3. Update Element at Position\n";
            cout << "4. Delete Element at Position\n";
            cout << "5. Find an Element\n";
            cout << "0. Go Back to Main Menu\n";
            cout << "Enter your Choice: ";
            cin >> choice;
            cout << "\n--------------------------------------\n";

            switch (choice) {
                case 1:
                    cout << "Enter Value to Add: ";
                    cin >> value;
                    myList.insert(value);
                    break;
                case 2:
                    myList.display();
                    break;
                case 3:
                    cout << "Enter Index to Update: ";
                    cin >> index;
                    cout << "Enter New Value: ";
                    cin >> value;
                    myList.update(index, value);
                    break;
                case 4:
                    cout << "Enter Index to Remove: ";
                    cin >> index;
                    myList.remove(index);
                    break;
                case 5:
                    cout << "Enter Element to Find: ";
                    cin >> value;
                    myList.find(value);
                    break;
                case 0:
                    cout << "----- Returning to Main Menu -----\n";
                    return;
                default:
                    cout << "----- Invalid Option, Please Try Again! -----\n";
            }
        }
    }
};

class BinarySearch {
public:
    int arraySize;
    int dataArray[100];

    void inputArray() {
        cout << "Enter the number of elements (max 100): ";
        cin >> arraySize;

        if (arraySize <= 0 || arraySize > 100) {
            cout << "Invalid array size. Please enter a number between 1 and 100.\n";
            arraySize = 0;
            return;
        }

        cout << "Enter the elements (make sure they are sorted for binary search to work!):\n";
        for (int i = 0; i < arraySize; i++) {
            cout << "Element[" << i << "] = ";
            cin >> dataArray[i];
        }
        displayArray();
    }

    void search() {
        if (arraySize == 0) {
            cout << "Please input an array first using option 5.\n";
            return;
        }
        int key, low = 0, high = arraySize - 1, mid;
        cout << "Enter Element to search for: ";
        cin >> key;

        while (low <= high) {
            mid = low + (high - low) / 2;
            if (dataArray[mid] == key) {
                cout << "Element " << key << " found at index " << mid << endl;
                return;
            } else if (dataArray[mid] < key) {
                low = mid + 1;
            } else {
                high = mid - 1;
            }
        }
        cout << "Element " << key << " not found in the array.\n";
    }

    void displayArray() {
        if (arraySize == 0) {
            cout << "Array is empty.\n";
            return;
        }
        cout << "\nYour Array:\n";
        for (int i = 0; i < arraySize; i++) {
            cout << "    Element[" << i << "] = " << dataArray[i] << endl;
        }
    }
};

class MergeSort {
public:
    void merge(int arr[], int left, int middle, int right) {
        int i = left, j = middle + 1, k = 0;
        int tempArr[100];

        while (i <= middle && j <= right) {
            if (arr[i] < arr[j]) {
                tempArr[k++] = arr[i++];
            } else {
                tempArr[k++] = arr[j++];
            }
        }

        while (i <= middle) tempArr[k++] = arr[i++];
        while (j <= right) tempArr[k++] = arr[j++];

        for (int x = 0; x < k; x++) {
            arr[left + x] = tempArr[x];
        }
    }

    void sort(int arr[], int left, int right) {
        if (left < right) {
            int mid = left + (right - left) / 2;
            sort(arr, left, mid);
            sort(arr, mid + 1, right);
            merge(arr, left, mid, right);
        }
    }

    void printArray(int arr[], int n) {
        if (n == 0) {
            cout << "Array is empty, nothing to sort.\n";
            return;
        }
        cout << "\nSorted Array (Merge Sort):\n";
        for (int i = 0; i < n; i++) {
            cout << "    Element[" << i << "] = " << arr[i] << endl;
        }
    }
};

class QuickSort {
public:
    void sort(int arr[], int low, int high) {
        if (low < high) {
            int pivotIndex = partition(arr, low, high);
            sort(arr, low, pivotIndex - 1);
            sort(arr, pivotIndex + 1, high);
        }
    }

    void swap(int& a, int& b) {
        int temp = a;
        a = b;
        b = temp;
    }

    int partition(int arr[], int low, int high) {
        int pivot = arr[high];
        int i = (low - 1);

        for (int j = low; j < high; j++) {
            if (arr[j] <= pivot) {
                i++;
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[i + 1], arr[high]);
        return (i + 1);
    }

    void printArray(int arr[], int n) {
        if (n == 0) {
            cout << "Array is empty, nothing to sort.\n";
            return;
        }
        cout << "\nSorted Array (Quick Sort):\n";
        for (int i = 0; i < n; i++) {
            cout << "    Element[" << i << "] = " << arr[i] << endl;
        }
    }
};

int main() {
    LinkedListMenu linkedListOperations;
    BinarySearch arraySearchOperations;
    MergeSort mergeSortAlgorithm;
    QuickSort quickSortAlgorithm;

    int mainChoice;

    while (true) {
        cout << "\n\n\n========================================\n";
        cout << "        Data Structure & Algorithms Menu\n";
        cout << "========================================\n";
        cout << "1. Linked List Operations\n";
        cout << "2. Binary Search on an Array\n";
        cout << "3. Perform Merge Sort on Array\n";
        cout << "4. Perform Quick Sort on Array\n";
        cout << "5. Input / Update Array for Searching/Sorting\n";
        cout << "0. Exit Program\n";
        cout << "----------------------------------------\n";
        cout << "Enter your Choice: ";
        cin >> mainChoice;
        cout << "========================================\n";

        switch (mainChoice) {
            case 1:
                linkedListOperations.runMenu();
                break;
            case 2:
                arraySearchOperations.search();
                break;
            case 3:
                if (arraySearchOperations.arraySize > 0) {
                    mergeSortAlgorithm.sort(arraySearchOperations.dataArray, 0, arraySearchOperations.arraySize - 1);
                    mergeSortAlgorithm.printArray(arraySearchOperations.dataArray, arraySearchOperations.arraySize);
                } else {
                    cout << "Please input an array first using option 5 before sorting.\n";
                }
                break;
            case 4:
                if (arraySearchOperations.arraySize > 0) {
                    quickSortAlgorithm.sort(arraySearchOperations.dataArray, 0, arraySearchOperations.arraySize - 1);
                    quickSortAlgorithm.printArray(arraySearchOperations.dataArray, arraySearchOperations.arraySize);
                } else {
                    cout << "Please input an array first using option 5 before sorting.\n";
                }
                break;
            case 5:
                arraySearchOperations.inputArray();
                break;
            case 0:
                cout << "Exiting the program. Goodbye!\n";
                return 0;
            default:
                cout << "Oops! That's not a valid option. Please try again.\n";
        }
    }
}