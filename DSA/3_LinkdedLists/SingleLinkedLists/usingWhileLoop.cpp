#include<iostream>
using namespace std;
class Node{
    public:
    int data;
    Node *next;
};

int main(){
 Node *ptr = NULL;
 Node *HEAD = new Node();
 HEAD->data = 24;
 HEAD->next =NULL;
 
 ptr = HEAD;
 Node  *current =new Node();
    current->data= 94;
    current->next = NULL;
    HEAD->next = current;

 current = new Node();
    current->data = 55;
    current->next = NULL;
    HEAD->next->next = current;

    while (ptr != NULL) {
        cout<<ptr->data<<endl;
        ptr = ptr->next;
    }
}
