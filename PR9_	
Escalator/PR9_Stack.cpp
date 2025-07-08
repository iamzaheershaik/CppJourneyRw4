#include<iostream>
using namespace std;
class stack {
private:
    int *array;
    int Top;
    int capacity;
public:
    stack(int size) {
        capacity = size;
        array = new int[capacity];
        Top = -1;
    }
    bool isEmpty() {
        return Top == -1;
    }
    bool isFull() {
        return Top == capacity - 1;
    }

    int push(int v) {
        if (isFull()) {
            cout << "Stack is Full" << endl;
            return -1;
        }else {
            Top += 1;//top++;
            array[Top] = v;
            cout<<"Element :-  "<<array[Top]<<" has been pushed to the stack"<<endl;
            return 0;
        }
    }
    int pop() {
        if (isEmpty()) {
            cout << "Stack is Empty " << endl;
            return -1;
        }else {
            cout<<"Element :-  "<<array[Top]<<" has been poped from the stack"<<endl;
            Top -= 1;//top--;
            return array[Top];
        }
    }
    int peek() {
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
        }else {
            cout<<"Peak Element in the Stack :-  "<<array[Top]<<endl;
            return array[Top];
        }
    }
    int display(){
        if (isEmpty()) {
            cout << "Stack is Empty" << endl;
            return -1;
        }else {
            cout<<"Elements of  stack"<<endl;
            for (int i = Top; i >= 0; i--) {
                cout<<array[i]<<endl;
            }
            cout<<endl;
        }
        return 0;
    }
};
int main() {
    int choice, value,size;
    cout<<"Enter the size of stack: "<<endl;
    cin>>size;
    stack stk(size);
    while (true) {
        cout<<"Enter 1 To Push the Element in stack"<<endl;
        cout<<"Enter 2 To Pop the Element in stack"<<endl;
        cout<<"Enter 3 To Display the peek Element of stack"<<endl;
        cout<<"Enter 4 to Display the Stack"<<endl;
        cout<<"Enter 5 To check Is Stack is Empty or Not "<<endl;
        cout<<"Enter 6 To check Is Stack is Full or Not "<<endl;
        cout<<"Enter 0 To exit"<<endl;
        cout<<"Enter your choice : "<<endl;
        cin>>choice;
        if (choice==0) {
            cout<<"----You Exited the Menu-------------"<<endl;
            break;
        }
        switch (choice) {
            case 1:
                cout<<"Enter the element to be pushed : "<<endl;
                cin>>value;
                stk.push(value);
                break;
            case 2:
                stk.pop();
                break;
            case 3:
                stk.peek();
                break;
            case 4:
                stk.display();
                break;
            case 5:
                if (stk.isEmpty())
                    cout << "Stack is Empty." << endl;
                else
                    cout << "Stack is Not Empty Elements available." << endl;
                break;
            case 6:
                if (stk.isFull())
                    cout << "Stack is Full." << endl;
                else
                    cout << "Stack is Not Full ocuppied." << endl;
                break;
            default:
                cout<<"Your Enter the Invalid option"<<endl;
        }
    }
}