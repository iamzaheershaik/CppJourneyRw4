#include<iostream>
using namespace std;
class Node {
public:
    int data;
    Node *next;
};
Node* search(Node *p, int key) {
    while (p!=NULL) {
        if (key==p->data) {
            return p;
        }
        p=p->next;
    }
    return NULL;
}
int main() {
    int A[] ={1,22,33,444,555,66};
    search(A,1);
}