#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
}*first;
void create(int a[],int n) {
    Node *t,*last;
    if (n == 0) {
        first = NULL;
        return;
    }
    first = new Node;
    first->data =a[0];
    first->next =NULL;
    last =first;
    for (int i=1; i<n; i++) {
        t = new Node;
        t->data =a[i];
        t->next =NULL;
        last->next =t;
        last =t;
    }
}
void display(Node *p) {
    while (p != NULL) {
        cout << p->data;
        if (p->next != NULL) {
            cout << "-->";
        }
        p = p->next;
    }
}
void Rdisplay(Node *p) {
    if (p != NULL) {
        Rdisplay(p->next);
        cout << p->data;
        if (p != first) {
            cout << "-->";
        }
    }
}
void insertLast(int x) {
    Node *t = new Node;
    t->data = x;
    t->next = NULL;

    if (first == NULL) {
        first = t;
    } else {
        Node *p = first;
        while (p->next != NULL) {
            p = p->next;
        }
        p->next = t;
    }
}
void deleteNode(int key) {
    if (first == NULL) {
        cout << "List is empty!" << endl;
        return;
    }
    if (first->data == key) {
        Node *temp = first;
        first = first->next;
        delete temp;
        cout << "Element deleted!" << endl;
        return;
    }
    Node *p = first;
    while (p->next != NULL) {
        if (p->next->data == key) {
            Node *temp = p->next;
            p->next = p->next->next;
            delete temp;
            cout << "Element deleted!" << endl;
            return;
        }
        p = p->next;
    }

    cout << "Element not found!" << endl;
}

void search(int key) {
    Node *p = first;
    while (p != NULL) {
        if (p->data == key) {
            cout << "Element found!" << endl;
            return;
        }
        p = p->next;
    }
    cout << "Element not found!" << endl;
}

int main() {
    int A[]={11,13,14,23,55};
    int choice, val;
    while (true) {
        cout<<endl;
        cout<<"1.Create the Linked List"<<endl;
        cout<<"2.Display the Linked List"<<endl;
        cout<<"3.Display the Linked List in Reverse Order"<<endl;
        cout<<"4.Insert or Add a New Node"<<endl;
        cout<<"5.Delete a Node"<<endl;
        cout<<"6.Search a Element in Linked List"<<endl;
        cout<<"0.Press For Exit"<<endl;
        cin>>choice;
        if (choice==0) {
            cout<<"---------You Exited the Menu----------"<<endl;
            break;
        }else {
            switch (choice) {
                case 1:
                    create(A,5);
                    cout<<"-----------Linked Created Successfully----------"<<endl;
                    break;
                case 2:
                    display(first);
                    break;
                case 3:
                    Rdisplay(first);
                    break;
                case 4:
                    int val;
                    cout << "Enter the element to insert: ";
                    cin >> val;
                    insertLast(val);
                    cout << "Element inserted!" << endl;
                    break;

                case 5:
                    cout << "Enter the element to delete: ";
                    cin >> val;
                    deleteNode(val);
                    break;
                case 6:
                    cout << "Enter the element to search: ";
                    cin >> val;
                    search(val);
                    break;
                default:
                    cout<<"invalid Choice Choose Correct Option"<<endl;

            }
        }
    }
}