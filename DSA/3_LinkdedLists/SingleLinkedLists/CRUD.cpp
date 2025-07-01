#include<iostream>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode *next;
};
    int ListLength(ListNode *head) {
        ListNode *current =head;
        int count =0;
        while(current!=NULL) {
            count++;
            current = current->next;
        }
        return count;
    }
    int ListInsert(ListNode *head, int data, int position) {
        int k=1;
        ListNode *p, *q, *newNode;
        ListNode* newNode = new ListNode();
        if (!newNode) {
            cout<<"memory error"<<endl;
            return;
        }
        newNode->data =data;
        p=*head;
        if (position==1) {
            newNode->next=p;
            *head=newNode;
        }else {
            while ((p!=NULL) && (k<position)){
                k++;
                q=p;
                p=p->next;
            }
            q->next=nextNode;
            newNode->next=p;
        }

    }
