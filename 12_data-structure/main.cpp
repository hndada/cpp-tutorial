#include <iostream>
#include <stack>
#include <queue>
#include <deque>

using std::cout, std::endl;
using std::stack;
using std::queue;
using std::deque;

// Stack, Queue, Deque
int main() {
    // Stack: push, pop, top
    stack<int> s;

    s.push(10); // Push 10 onto the stack
    s.push(20); // Push 20 onto the stack
    s.push(30); // Push 30 onto the stack
    cout << "Top element: " << s.top() << endl; // 30

    s.pop(); // Remove the top element (30)
    cout << "New top element: " << s.top() << endl; // 20
    cout << endl;


    // Queue: push, pop, front
    queue<int> q;

    q.push(10); // Enqueue 10
    q.push(20); // Enqueue 20
    q.push(30); // Enqueue 30
    cout << "Front element: " << q.front() << endl; // 10

    q.pop(); // Dequeue the front element (10)
    cout << "New front element: " << q.front() << endl; // 20
    cout << endl;

    
    // Deque is a double-ended queue.
    // Deque: push_back, push_front, pop_back, pop_front, front, back
    deque<int> d;

    d.push_back(10); // Add 10 to the back
    d.push_front(20); // Add 20 to the front
    d.push_back(30); // Add 30 to the back
    cout << "Front element: " << d.front() << endl; // 20
    cout << "Back element: " << d.back() << endl; // 30

    d.pop_front(); // Remove the front element (20)
    d.pop_back(); // Remove the back element (30)
    cout << "New front element: " << d.front() << endl; // 10

    return 0;
}
