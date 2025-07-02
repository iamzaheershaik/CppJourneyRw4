#include<iostream>
#include <climits>
using namespace std;

class Node{
    public:
        int data;
         Node *next;

}*first;
void create(int a[], int n){
    int i;
    Node *t, *last;
    first = new Node;
    first->data = a[0];
    first->next =NULL;
    last=first;
        for(i=1; i<n; i++){
        t=new Node;
        t->data = a[i];
        t->next = NULL;
        last->next = t;
        last = t;
        }
}
void display(Node *p){
    while(p!=NULL){
        cout<<p->data<<"------>";
        p=p->next;
    }
}
void Rdisplay(Node *q){
    if (q != NULL) {
        Rdisplay(q->next); // go to end first
        cout << q->data << "------>";
    }
}
int count(Node *s){
    int c = 0;
    while(s != NULL){
        c++;
        s = s->next;
    }
    return c;
}
int add(Node *t) {
    int sum=0;
    while (t) {
        sum = sum+t->data;
        t=t->next;
    }
    return sum;
}
int Radd(Node *u) {
    if (u==0) {
        return 0;
    }else {
        return Radd(u->next)+u->data;
    }
}
int max(Node *v) {
    int m =  INT_MIN;
    while (v) {
        if (v->data>m) {
            m=v->data;
        }
    v=v->next;
    }
    return m;
}
int  Rmax(Node *x) {
    int m=0;
    if (x==0) {
        return INT_MIN;
    }else {
        m=Rmax(x->next);
        return m>x->data?m:x->data;
    }
}
Node* search(Node *p, int key) {
    while (p!=NULL) {
        if (key==p->data) {
            return p;
        }
        p=p->next;
    }
    return NULL;
}
Node* Rsearch(Node *p, int key) {
    if (p==NULL) {
        return NULL;
    }else if (key==p->data){
        return p;
    }
    return Rsearch(p->next,key);
}
int main(){
    int A[] {1,22,44,55,66}, choice, key;
    while(true){
        cout<<"0.Exit"<<endl;
        cout<<"1.Create the Linked List"<<endl;
        cout<<"2.Display the Linked List"<<endl;
        cout<<"3.Display the Reverse Linked List"<<endl;
        cout<<"4.Find the Length of Linked List"<<endl;
        cout<<"5.Sum of the Elements in LinkedList Nodes"<<endl;
        cout<<"6.Sum Using The Recursive"<<endl;
        cout<<"7.Find the Max Number in the list"<<endl;
        cout<<"8.Find the RMax Number using the recursion"<<endl;
        cout<<"9.Search for a Key in the List"<<endl;
        cout<<"10.Search for a Key in the List"<<endl;
        cout<<"Enter your Choice"<<endl;
        cin>>choice;
        if(choice==0){
            cout<<"You Have Exited the Programme successfully"<<endl;
            break;
        }
        else{
               switch(choice){
                   case 0:
                       cout<<"You Have Successfully Exited"<<endl;
                       break;
                    case  1:
                       create(A,5);
                       cout<<"---------------linked List Successfully Created-------------------"<<endl;
                       cout << endl;
                       break;
                    case 2:
                       display(first);
                       cout << endl;
                       break;
                    case 3:
                       Rdisplay(first);
                       cout << endl;
                       break;
                    case 4:
                       cout<<"The No of Nodes in the Linked List = "<<count(first)<<endl;
                       break;
                    case 5:
                       cout<<"The Sum of The LinkedList = "<<add(first)<<endl;
                       break;
                   case 6:
                       cout<<"The Sum Using the Recursive = "<<Radd(first)<<endl;
                       break;
                   case 7:
                       cout<<"The Max No in the LinkedList = "<<max(first)<<endl;
                       break;
                   case 8:
                       cout<<"The Rmax No in the LinkedList = "<<Rmax(first)<<endl;
                       break;
                   case 9:
                       cout << "Enter the key to search: ";
                       cin >> key;
                   {
                       Node *result = search(first, key);
                       if (result != NULL) {
                           cout << "Key " << key << " found at node with address: " << result
                                << ", data = " << result->data << endl;
                       } else {
                           cout << "Key " << key << " not found." << endl;
                       }
                   }
                       break;
                default:
                        cout<<"Invalid Option"<<endl;
               }
        }
    }
}