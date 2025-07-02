#include<iostream>
using namespace std;
class stack {
public:
    int size;
    int top;
    int *s;
};
void push(stack *st, int x) {
    if (st->top==st->size-1) {
        cout<<"Stack OverFlow"<<endl;
    }else {
        st->top++;
        st->s[st->top]=x;
    }
}
int pop(stack *st) {
    int x = -1; //if stack is empty returns x =-1 which let us know that stack is empty
    if (st->top==-1) {
        cout<<"stack is underflow"<<endl;
    }else {
        x=st->s[st->top];
        st->top--;
    }
    return x;
}
int peek(stack *st, int pos) {
    int x = -1;
    if (st.top-pos+1<0) {
        cout<<"invalid option"<<endl;
    }else {
        x=st.s[st.top-pos+1];
    }
    return x;
}
int stackTop(stack *st) {
    if (st.top==-1) {
        return -1;
    }else {
        return st.s[st.top];
    }
}
int isEmpty(stack *st) {
    if (st.top==-1) {
        return -1;
    }else {
        return 0;
    }
}
int isStackFull(stack *s) {
    if (st.top==st.size-1) {
        return 1;
    }else {
        return 0;
    }
}
int main(){
    push(7, 5);
}