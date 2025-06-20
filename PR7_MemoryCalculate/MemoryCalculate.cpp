#include <iostream>
#include <vector>
using namespace std;

template <typename T>
class Person {
private:
    T       id;
    string  name;

public:
    Person(T i, string n) {
        id   = i;
        name = n;
    }
    void display() {
        cout << "ID: " << id << ", Name: " << name << endl;
    }
    T getId() {
        return id;
    }
};
template <typename T>
class MemoryStudent : public Person<T> {
public:
    MemoryStudent(T i, string n) : Person<T>(i, n) {}

};

int main() {
    vector<MemoryStudent<string>> students;
    int    choice;
    string id, name;

    while (choice != 5) {
        cout << "\n--- Student Management System ---\n"
             << "1. Add Student\n"
             << "2. Display All Students\n"
             << "3. Remove Student by ID\n"
             << "4. Search Student by ID\n"
             << "5. Exit\n"
             << "Enter your choice: ";
        cin >> choice;
        cin.ignore();

        switch (choice) {
            case 1:
                cout << "Enter ID: ";
                getline(cin, id);
                /*used the getline() because Cin
                 cant stored more than one Word sir, if we give space after word and write another word
                when giving input the Ouput prints only one first word after space wont print so this is reason
    q            i used instead

                मैंने getline() का उपयोग इसलिए किया क्योंकि cin एक से अधिक शब्द इनपुट नहीं कर सकता, सर। अगर हम किसी
                शब्द के बाद स्पेस देकर दूसरा शब्द लिखते हैं, तो आउटपुट
                में केवल पहला शब्द ही दिखता है, स्पेस के बाद का हिस्सा नहीं आता। इसी वजह से मैंने getline() का इस्तेमाल किया।
                */
                cout << "Enter Name: ";
                getline(cin, name);
                students.push_back(MemoryStudent<string>(id, name));
                break;
            case 2:
                if (students.size() == 0) {
                    cout << "No students available.\n";
                } else {
                    for (int i = 0; i < students.size(); i++)
                        students[i].display();
                }
                break;

            case 3:   // REMOVE
                cout << "Enter ID to remove: ";
                getline(cin, id);
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == id) {
                        students.erase(students.begin() + i);
                        cout << "Student removed.\n";
                        break;
                    }
                }
                break;

            case 4:
                cout << "Enter ID to search: ";
                getline(cin, id);
                for (int i = 0; i < students.size(); i++) {
                    if (students[i].getId() == id) {
                        students[i].display();
                        break;
                    }
                }
                break;

            case 5:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice.\n";
        }
    }
    return 0;
}

