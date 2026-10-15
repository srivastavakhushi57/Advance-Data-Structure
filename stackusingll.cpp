#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data=value;
        next=nullptr;
    }
};

class Stack{
    Node* top;
public:
    Stack(){
        top=nullptr;
    }

    void push(int value){
        Node* newNode=new Node(value);
        newNode->next=top;
        top=newNode;
    }

    void pop(){
        if(top==nullptr){
            cout<<"underflow"<<endl;
        }
        else{
            Node* temp=top;
            cout<<top->data;
            top=top->next;
            delete temp;
        }
    }

    void peek(){
        if(top==nullptr){
            cout<<"stack is empty"<<endl;
        }
        cout<<top->data;
    }

    void display(){
        if(top==nullptr){
            cout<<"stack is empty"<<endl;
        }
        Node* temp=top;

        while(temp!=nullptr){
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<endl;
    }
};

int main(){
    Stack s;
    s.push(20);
    s.push(30);
    s.push(40);

    s.display();

    s.pop();
    s.peek();
    s.display();
}