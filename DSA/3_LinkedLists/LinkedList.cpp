#include<iostream>
#include<list>
using namespace std;
class Node{
    public:
        int data;
        Node *next;
    Node(int data){
        this->data =data;
        this->next =NULL;
    }
    };

class LinkedList{
    public:
        Node *head;
        int count;
    LinkedList() {
        head =NULL;
        count=0;
    }
    void create(int data){
        //int *data = new int(data) stores in Heap Memory
        Node *newNode = new Node(data);
        if(head==NULL){
            head=newNode;
        }
        else{
            Node *ptr =head;
            while(ptr->next!=NULL){
                ptr =ptr->next;
            }
            ptr->next=newNode;
        }
        count++;
    }
    void viewData(){
        Node *ptr =head;
        while(ptr!=NULL){
        cout<<ptr->data<<endl;
            ptr= ptr->next;
        }

    }


    };
int main(){
    int ch, element;
    LinkedList list; //object of LinkedList class
    while(true){
        cout<<"1.Insert The Element"<<endl;
        cout<<"2.View The Element"<<endl;
        cout<<"0.Exit"<<endl;
        cout<<"Choose the Option"<<endl;
        cin>>ch;
        if(ch==0){
           cout<<"--------Thank-You--"<<endl;
            break;
          }
        switch(ch){
                case 1:
                    cout<<"insert the Element in List"<<endl;
                    cin>>element;
                    list.create(element);
                    cout<<"-------Element Created Successfully---------"<<endl;
                break;
                case 2:
                    list.viewData();
                break;
            default:
                    cout<<"You Entered invalid Option"<<endl;
            }
        }
    }

