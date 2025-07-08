#include<iostream>
using namespace std;

class queue {
private:
    int *array;
    int front;
    int rear;
    int capacity;
public:
    queue(int size) {
        capacity = size;
        array = new int[capacity];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1 || front > rear;
    }

    bool isFull() {
        return rear == capacity - 1;
    }

    int enqueue(int v) {
        if (isFull()) {
            cout << "Queue is Full" << endl;
            return -1;
        } else {
            if (front == -1) front = 0; // first element
            rear++;
            array[rear] = v;
            cout << "Element :-  " << array[rear] << " has been enqueued to the queue" << endl;
            return 0;
        }
    }

    int dequeue() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        } else {
            cout << "Element :-  " << array[front] << " has been dequeued from the queue" << endl;
            front++;
            return 0;
        }
    }

    int peek() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        } else {
            cout << "Front Element in the Queue :-  " << array[front] << endl;
            return array[front];
        }
    }

    int display() {
        if (isEmpty()) {
            cout << "Queue is Empty" << endl;
            return -1;
        } else {
            cout << "Elements of queue:" << endl;
            for (int i = front; i <= rear; i++) {
                cout << array[i] << endl;
            }
            cout << endl;
            return 0;
        }
    }
};

int main() {
    int choice, value, size;
    cout << "Enter the size of queue: " << endl;
    cin >> size;
    queue q(size);
    while (true) {
        cout << "Enter 1 To Enqueue an Element in queue" << endl;
        cout << "Enter 2 To Dequeue an Element from queue" << endl;
        cout << "Enter 3 To Display the Front Element of queue" << endl;
        cout << "Enter 4 To Display the Queue" << endl;
        cout << "Enter 5 To check if Queue is Empty or Not" << endl;
        cout << "Enter 6 To check if Queue is Full or Not" << endl;
        cout << "Enter 0 To exit" << endl;
        cout << "Enter your choice : " << endl;
        cin >> choice;
        if (choice == 0) {
            cout << "----You Exited the Menu-------------" << endl;
            break;
        }
        switch (choice) {
            case 1:
                cout << "Enter the element to be enqueued : " << endl;
                cin >> value;
                q.enqueue(value);
                break;
            case 2:
                q.dequeue();
                break;
            case 3:
                q.peek();
                break;
            case 4:
                q.display();
                break;
            case 5:
                if (q.isEmpty())
                    cout << "Queue is Empty." << endl;
                else
                    cout << "Queue is Not Empty. Elements available." << endl;
                break;
            case 6:
                if (q.isFull())
                    cout << "Queue is Full." << endl;
                else
                    cout << "Queue is Not Full." << endl;
                break;
            default:
                cout << "You entered an Invalid option" << endl;
        }
    }
}
