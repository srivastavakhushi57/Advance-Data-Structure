#include <iostream>
#include <stack>
using namespace std;

stack<int> s1, s2;

void enqueue(int x) {
    s1.push(x);
}

void dequeue() {
    if (s1.empty() && s2.empty()) {
        cout << "Queue is empty\n";
        return;
    }

    if (s2.empty()) {
        while (!s1.empty()) {
            s2.push(s1.top());
            s1.pop();
        }
    }

    cout << "Deleted: " << s2.top() << endl;
    s2.pop();
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}