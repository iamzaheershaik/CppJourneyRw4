#include<iostream>
using namespace std;

class Node{

public:
    int data;
    Node *next;
};

int main(){
Node *Head = NULL;
Head =new Node();
Head->data = 10;
Head->next = NULL;

Node *N1 = new Node();
N1->data = 20;
N1->next = NULL;
Head->next=N1;

Node *N2 = new Node();
N2->data = 40;
N2->next = NULL;
N1->next=N2;

Node *N3 = new Node();
N3->data = 50;
N3->next = NULL;
N2->next=N3;

Node *N4 = new Node();
N4->data = 57;
N4->next = NULL;
    Node *temp = Head;
    while(temp != NULL) {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << "NULL" << endl;

    return 0;
}


