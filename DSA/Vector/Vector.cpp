#include <iostream>
#include <vector>
using namespace std;
class VectorManager {
private:
    vector<int> data;
public:
    VectorManager(vector<int> initData) {
        data = initData;
    }
    void addElement(int value) {
        data.push_back(value);
        cout << "Element added.\n";
    }
    void deleteElement() {
        if (!data.empty()) {
            data.pop_back();
            cout << "Last element deleted.\n";
        } else {
            cout << "Vector is empty.\n";
        }
    }
    vector<int> getData() {
        return data;
    }
    int getSize() {
        return data.size();
    }
    void display() {
        if (data.empty()) {
            cout << "Vector is empty.\n";
            return;
        }
        cout << "Vector elements: ";
        for (int i = 0; i < data.size(); i++) {
            cout << data[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    vector<int> initialData = {1, 2, 3};
    VectorManager vm(initialData);
    int choice;
    while (true) {
        cout << "\n----- Vector Menu -----\n";
        cout << "1. Insert Element\n";
        cout << "2. Delete Last Element\n";
        cout << "3. Display Elements\n";
        cout << "4. Get Vector Size\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 5) {
            cout << "Exiting program.\n";
            break;
        }

        switch (choice) {
            case 1: {
                int value;
                cout << "Enter value to insert: ";
                cin >> value;
                vm.addElement(value);
                break;
            }
            case 2:
                vm.deleteElement();
                break;
            case 3:
                vm.display();
                break;
            case 4:
                cout << "Vector size: " << vm.getSize() << endl;
                break;
            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
