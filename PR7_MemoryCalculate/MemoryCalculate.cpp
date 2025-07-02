#include <iostream>
#include <vector>
using namespace std;
template <typename T>
class Student {
private:
    T id;
    string name;

public:
    Student(T i, string n) {
        id = i;
        name = n;
    }

    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }

    T getId() {
        return id;
    }
};

int main() {
    vector<Student<string>> students = {
        Student<string>("A101", "Arjun"),
        Student<string>("B202", "Bina"),
        Student<string>("C303", "Chirag")
    };
    int choice;
    string id, name;
    while (true) {
        cout << "\n--- Student Management System ---\n";
        cout << "1. Add Student\n";
        cout << "2. Display All Students\n";
        cout << "3. Remove Student by ID\n";
        cout << "4. Search Student by ID\n";
        cout << "5. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;
        cin.ignore();
        switch (choice) {
            case 1: {
                cout << "Enter ID: ";
                getline(cin, id);
                cout << "Enter Name: ";
                getline(cin, name);
                students.push_back(Student<string>(id, name));
                break;
            }
            case 2: {
                if (students.size() == 0) {
                    cout << "No students to display.\n";
                } else {
                    for (int i = 0; i < students.size(); i++) {
                        students[i].display();
                    }
                }
                break;
            }
            case 3: {
                cout << "Enter ID to remove: ";
                getline(cin, id);
                bool removed = false;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == id) {
                        students.erase(students.begin() + i);
                        cout << "Student removed.\n";
                        removed = true;
                        break;
                    }
                }
                if (!removed) {
                    cout << "ID not found.\n";
                }
                break;
            }

            case 4: {
                cout << "Enter ID to search: ";
                getline(cin, id);
                bool found = false;
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == id) {
                        students[i].display();
                        found = true;
                        break;
                    }
                }
                if (!found) {
                    cout << "ID not found.\n";
                }
                break;
            }

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice. Try again.\n";
        }
    }
    return 0;
}
