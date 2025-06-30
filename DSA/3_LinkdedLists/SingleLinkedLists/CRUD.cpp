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
