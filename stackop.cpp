#include <iostream>
using namespace std;

const int maxs = 100;
int st[maxs], top = -1;

bool isempty() {
    return top == -1;
}

bool isfull() {
    return top == maxs - 1;
}

void push(int x) {
    if (isfull()) {
        cout << "overflow" << endl;
        return;
    }
    st[++top] = x;
}

int pop() {
    if (isempty()) {
        cout << "underflow" << endl;
        return -1;
    }
    return st[top--];
}

int peek(){
    if(isempty()){
        cout<<"stack is empty";
        return -1;
    }
    else{
        return st[top];
    }
}

void display() {
    if (isempty()) {
        cout << "Stack is empty" << endl;
        return;
    }

    for (int i = top; i >= 0; i--) {
        cout << st[i] << " ";
    }
    cout << endl;
}

int main() {
    push(1);
    push(2);
    push(3);
    push(4);

    display();

    cout<<pop()<<endl;

    cout<<peek()<<endl;

    display();

    return 0;
}