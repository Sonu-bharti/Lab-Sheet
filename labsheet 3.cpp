// Name Of The Student : Sonu Bharti
// Rollno : 2301010323
// Section : 05
// Lab sheet 3 solution 

// Stack Implementations 


//(a) array based stack code 


#include <iostream>
#include <vector>
#include <string>
using namespace std;

class ArrayStack {
private:
    vector<int> stack;
public:
    void push(int item) {
        stack.push_back(item);
    }
    int pop() {
        if (!isEmpty()) {
            int item = stack.back();
            stack.pop_back();
            return item;
        }
        throw runtime_error("Stack is empty");
    }
    int peek() {
        if (!isEmpty()) return stack.back();
        throw runtime_error("Stack is empty");
    }
    bool isEmpty() {
        return stack.empty();
    }
};

// test cases of stack implementation array based
void testArrayStack() {
    ArrayStack stack;

    // Test 1: Push elements into the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    assert(stack.peek() == 30); // Top element should be 30
    cout << "Test 1 Passed: Push and Peek\n";

    // Test 2: Pop elements from the stack
    assert(stack.pop() == 30); // Pop 30
    assert(stack.pop() == 20); // Pop 20
    assert(stack.peek() == 10); // Top element should now be 10
    cout << "Test 2 Passed: Pop\n";

    // Test 3: Check if stack is empty
    stack.pop(); // Pop last element (10)
    assert(stack.isEmpty() == true); // Stack should be empty now
    cout << "Test 3 Passed: IsEmpty after all pops\n";

    // Test 4: Attempt to pop from an empty stack
    try {
        stack.pop(); // Should throw an error
        cout << "Test 4 Failed: No exception thrown for popping empty stack\n";
    } catch (const runtime_error& e) {
        cout << "Test 4 Passed: Exception thrown for popping empty stack\n";
    }

    // Test 5: Attempt to peek from an empty stack
    try {
        stack.peek(); // Should throw an error
        cout << "Test 5 Failed: No exception thrown for peeking empty stack\n";
    } catch (const runtime_error& e) {
        cout << "Test 5 Passed: Exception thrown for peeking empty stack\n";
    }

    // Test 6: Push and check IsEmpty
    stack.push(50);
    assert(stack.isEmpty() == false); // Stack should not be empty
    cout << "Test 6 Passed: IsEmpty after push\n";

    // Test 7: Push multiple elements and pop all
    stack.push(60);
    stack.push(70);
    assert(stack.pop() == 70); // Pop 70
    assert(stack.pop() == 60); // Pop 60
    assert(stack.pop() == 50); // Pop 50
    assert(stack.isEmpty() == true); // Stack should be empty
    cout << "Test 7 Passed: Push and Pop multiple elements\n";
}
// main function to run the entire code 
int main() {
    testArrayStack();
    cout << "All ArrayStack Test Cases Passed!" << endl;
    return 0;
}

// output of the array based stack 
// Test 1 Passed: Push and Peek
// Test 2 Passed: Pop
// Test 3 Passed: IsEmpty after all pops
// Test 4 Passed: Exception thrown for popping empty stack
// Test 5 Passed: Exception thrown for peeking empty stack
// Test 6 Passed: IsEmpty after push
// Test 7 Passed: Push and Pop multiple elements
// All ArrayStack Test Cases Passed!




// linked list based stack 

#include <iostream>
#include <cassert>
using namespace std;

void testLinkedListStack() {
    LinkedListStack stack;

    // Test 1: Push elements into the stack
    stack.push(10);
    stack.push(20);
    stack.push(30);
    assert(stack.peek() == 30); // Top element should be 30
    cout << "Test 1 Passed: Push and Peek\n";

    // Test 2: Pop elements from the stack
    assert(stack.pop() == 30); // Pop 30
    assert(stack.pop() == 20); // Pop 20
    assert(stack.peek() == 10); // Top element should now be 10
    cout << "Test 2 Passed: Pop\n";

    // Test 3: Check if stack is empty
    stack.pop(); // Pop last element (10)
    assert(stack.isEmpty() == true); // Stack should be empty now
    cout << "Test 3 Passed: IsEmpty after all pops\n";

    // Test 4: Attempt to pop from an empty stack
    try {
        stack.pop(); // Should throw an error
        cout << "Test 4 Failed: No exception thrown for popping empty stack\n";
    } catch (const runtime_error& e) {
        cout << "Test 4 Passed: Exception thrown for popping empty stack\n";
    }

    // Test 5: Attempt to peek from an empty stack
    try {
        stack.peek(); // Should throw an error
        cout << "Test 5 Failed: No exception thrown for peeking empty stack\n";
    } catch (const runtime_error& e) {
        cout << "Test 5 Passed: Exception thrown for peeking empty stack\n";
    }

    // Test 6: Push and check IsEmpty
    stack.push(50);
    assert(stack.isEmpty() == false); // Stack should not be empty
    cout << "Test 6 Passed: IsEmpty after push\n";

    // Test 7: Push multiple elements and pop all
    stack.push(60);
    stack.push(70);
    assert(stack.pop() == 70); // Pop 70
    assert(stack.pop() == 60); // Pop 60
    assert(stack.pop() == 50); // Pop 50
    assert(stack.isEmpty() == true); // Stack should be empty
    cout << "Test 7 Passed: Push and Pop multiple elements\n";
}
// output of the code  linked list based stack 
//Test 1 Passed: Push and Peek
// Test 2 Passed: Pop
// Test 3 Passed: IsEmpty after all pops
// Test 4 Passed: Exception thrown for popping empty stack
// Test 5 Passed: Exception thrown for peeking empty stack
// Test 6 Passed: IsEmpty after push
// Test 7 Passed: Push and Pop multiple elements
// All LinkedListStack Test Cases Passed!

//  Queue based implemetation
// (a) array based queue
#include <iostream>
#include <vector>
#include <stdexcept>
#include <cassert>
using namespace std;

class ArrayQueue {
private:
    vector<int> queue;
public:
    void enqueue(int item) {
        queue.push_back(item);
    }
    int dequeue() {
        if (!isEmpty()) {
            int item = queue.front();
            queue.erase(queue.begin());
            return item;
        }
        throw runtime_error("Queue is empty");
    }
    int peek() {
        if (!isEmpty()) return queue.front();
        throw runtime_error("Queue is empty");
    }
    bool isEmpty() {
        return queue.empty();
    }
};

// Test cases for ArrayQueue
void testArrayQueue() {
    ArrayQueue queue;

    // Test 1: Enqueue elements
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    assert(queue.peek() == 10); // Front element should be 10
    cout << "Test 1 Passed: Enqueue and Peek\n";

    // Test 2: Dequeue elements
    assert(queue.dequeue() == 10); // Remove 10
    assert(queue.dequeue() == 20); // Remove 20
    assert(queue.peek() == 30);    // Front element should now be 30
    cout << "Test 2 Passed: Dequeue\n";

    // Test 3: Check if queue is empty
    queue.dequeue();               // Remove 30
    assert(queue.isEmpty() == true); // Queue should now be empty
    cout << "Test 3 Passed: IsEmpty after all dequeues\n";

    // Test 4: Attempt to dequeue from an empty queue
    try {
        queue.dequeue(); // Should throw an error
        cout << "Test 4 Failed: No exception thrown for dequeue from empty queue\n";
    } catch (const runtime_error& e) {
        cout << "Test 4 Passed: Exception thrown for dequeue from empty queue\n";
    }

    // Test 5: Attempt to peek into an empty queue
    try {
        queue.peek(); // Should throw an error
        cout << "Test 5 Failed: No exception thrown for peek into empty queue\n";
    } catch (const runtime_error& e) {
        cout << "Test 5 Passed: Exception thrown for peek into empty queue\n";
    }

    // Test 6: Enqueue and check IsEmpty
    queue.enqueue(40);
    assert(queue.isEmpty() == false); // Queue should not be empty
    cout << "Test 6 Passed: IsEmpty after enqueue\n";

    // Test 7: Enqueue multiple elements and dequeue all
    queue.enqueue(50);
    queue.enqueue(60);
    assert(queue.dequeue() == 40); // Remove 40
    assert(queue.dequeue() == 50); // Remove 50
    assert(queue.dequeue() == 60); // Remove 60
    assert(queue.isEmpty() == true); // Queue should now be empty
    cout << "Test 7 Passed: Enqueue and Dequeue multiple elements\n";
}
// the main methode of this code is here
int main() {
    testArrayQueue();
    cout << "All ArrayQueue Test Cases Passed!" << endl;
    return 0;
}

// All Test cases of the above code is sucessfully passed
// Test 1 Passed: Enqueue and Peek
// Test 2 Passed: Dequeue
// Test 3 Passed: IsEmpty after all dequeues
// Test 4 Passed: Exception thrown for dequeue from empty queue
// Test 5 Passed: Exception thrown for peek into empty queue
// Test 6 Passed: IsEmpty after enqueue
// Test 7 Passed: Enqueue and Dequeue multiple elements
// All ArrayQueue Test Cases Passed!

// linked based queue implementation
#include <iostream>
#include <cassert>
#include <stdexcept>
using namespace std;

class Node {
public:
    int value;
    Node* next;
    Node(int val) : value(val), next(nullptr) {}
};

class LinkedListQueue {
private:
    Node* front;
    Node* rear;
public:
    LinkedListQueue() : front(nullptr), rear(nullptr) {}

    void enqueue(int item) {
        Node* newNode = new Node(item);
        if (rear != nullptr) rear->next = newNode;
        rear = newNode;
        if (front == nullptr) front = newNode;
    }

    int dequeue() {
        if (front != nullptr) {
            int val = front->value;
            Node* temp = front;
            front = front->next;
            if (front == nullptr) rear = nullptr;
            delete temp;
            return val;
        }
        throw runtime_error("Queue is empty");
    }

    int peek() {
        if (front != nullptr) return front->value;
        throw runtime_error("Queue is empty");
    }

    bool isEmpty() {
        return front == nullptr;
    }
};

void testLinkedListQueue() {
    LinkedListQueue queue;

    // Test 1: Enqueue elements
    queue.enqueue(10);
    queue.enqueue(20);
    queue.enqueue(30);
    assert(queue.peek() == 10); // Front element should be 10
    cout << "Test 1 Passed: Enqueue and Peek\n";

    // Test 2: Dequeue elements
    assert(queue.dequeue() == 10); // Remove 10
    assert(queue.dequeue() == 20); // Remove 20
    assert(queue.peek() == 30);    // Front element should now be 30
    cout << "Test 2 Passed: Dequeue\n";

    // Test 3: Check if queue is empty
    queue.dequeue();               // Remove 30
    assert(queue.isEmpty() == true); // Queue should now be empty
    cout << "Test 3 Passed: IsEmpty after all dequeues\n";

    // Test 4: Attempt to dequeue from an empty queue
    try {
        queue.dequeue(); // Should throw an error
        cout << "Test 4 Failed: No exception thrown for dequeue from empty queue\n";
    } catch (const runtime_error& e) {
        cout << "Test 4 Passed: Exception thrown for dequeue from empty queue\n";
    }

    // Test 5: Attempt to peek into an empty queue
    try {
        queue.peek(); // Should throw an error
        cout << "Test 5 Failed: No exception thrown for peek into empty queue\n";
    } catch (const runtime_error& e) {
        cout << "Test 5 Passed: Exception thrown for peek into empty queue\n";
    }

    // Test 6: Enqueue and check IsEmpty
    queue.enqueue(40);
    assert(queue.isEmpty() == false); // Queue should not be empty
    cout << "Test 6 Passed: IsEmpty after enqueue\n";

    // Test 7: Enqueue multiple elements and dequeue all
    queue.enqueue(50);
    queue.enqueue(60);
    assert(queue.dequeue() == 40); // Remove 40
    assert(queue.dequeue() == 50); // Remove 50
    assert(queue.dequeue() == 60); // Remove 60
    assert(queue.isEmpty() == true); // Queue should now be empty
    cout << "Test 7 Passed: Enqueue and Dequeue multiple elements\n";
}
// main methode 
int main() {
    testLinkedListQueue();
    cout << "All LinkedListQueue Test Cases Passed!" << endl;
    return 0;
}
// all test cases are passed
// Test 1 Passed: Enqueue and Peek
// Test 2 Passed: Dequeue
// Test 3 Passed: IsEmpty after all dequeues
// Test 4 Passed: Exception thrown for dequeue from empty queue
// Test 5 Passed: Exception thrown for peek into empty queue
// Test 6 Passed: IsEmpty after enqueue
// Test 7 Passed: Enqueue and Dequeue multiple elements
// All LinkedListQueue Test Cases Passed!


// Application 1
// stack system simulation 
#include <iostream>
#include <stack>
#include <string>

using namespace std;

void functionC(stack<string>& s) {
    cout << "Entering function C" << endl;
    s.push("Function C");
    cout << "Exiting function C" << endl;
    s.pop();
}

void functionB(stack<string>& s) {
    cout << "Entering function B" << endl;
    s.push("Function B");
    functionC(s);
    cout << "Exiting function B" << endl;
    s.pop();
}

void functionA(stack<string>& s) {
    cout << "Entering function A" << endl;
    s.push("Function A");
    functionB(s);
    cout << "Exiting function A" << endl;
    s.pop();
}

int main() {
    stack<string> systemStack;
    functionA(systemStack);
    return 0;
}
// output of the stack system simulating 
// Entering function A
// Entering function B
// Entering function C
// Exiting function C
// Exiting function B
// Exiting function A

// Application 2 

// Reversing Data (String Reversal Using a Stack)

// #include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseString(const string& input) {
    stack<char> charStack;
    
    // Push all characters of the string onto the stack
    for (char c : input) {
        charStack.push(c);
    }
    
    // Pop characters from the stack to reverse the string
    string reversedString = "";
    while (!charStack.empty()) {
        reversedString += charStack.top();
        charStack.pop();
    }
    
    return reversedString;
}

int main() {
    string input = "Hello, World!";
    cout << "Original String: " << input << endl;
    cout << "Reversed String: " << reverseString(input) << endl;
    return 0;
}

// output of this given code is
// Original String: Hello, World!
// Reversed String: !dlroW ,olleH

// Apllication 3 
// Queue Management Simulation (Print Queue)
#include <iostream>
#include <queue>
#include <string>

using namespace std;

class PrintQueue {
private:
    queue<string> printQueue;
    
public:
    // Method to add a document to the queue
    void addDocument(const string& document) {
        printQueue.push(document);
        cout << "Document '" << document << "' added to the print queue." << endl;
    }
    
    // Method to process (print) a document
    void processDocument() {
        if (printQueue.empty()) {
            cout << "No documents to print." << endl;
        } else {
            cout << "Printing document: " << printQueue.front() << endl;
            printQueue.pop();
        }
    }
    
    // Method to display all documents in the queue
    void displayQueue() {
        if (printQueue.empty()) {
            cout << "The print queue is empty." << endl;
        } else {
            cout << "Documents in the print queue:" << endl;
            queue<string> tempQueue = printQueue;
            while (!tempQueue.empty()) {
                cout << "- " << tempQueue.front() << endl;
                tempQueue.pop();
            }
        }
    }
};

int main() {
    PrintQueue pq;
    
    pq.addDocument("Document1.pdf");
    pq.addDocument("Document2.docx");
    pq.addDocument("Document3.pptx");
    
    pq.displayQueue();
    
    pq.processDocument();
    pq.processDocument();
    
    pq.displayQueue();
    
    return 0;
}
// output of this code is 

// Document 'Document1.pdf' added to the print queue.
// Document 'Document2.docx' added to the print queue.
// Document 'Document3.pptx' added to the print queue.
// Documents in the print queue:
// - Document1.pdf
// - Document2.docx
// - Document3.pptx
// Printing document: Document1.pdf
// Printing document: Document2.docx
// Documents in the print queue:
// - Document3.pptx

