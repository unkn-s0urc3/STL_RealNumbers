#include <iostream>
#include <stack>

template<typename T>
class RealNumberStack {
private:
    std::stack<T> stack; // Declare a stack to hold elements of type T.

public:
    // Method to add an element to the stack.
    void push(const T& value) {
        stack.push(value);
    }

    // Method to remove the top element from the stack.
    void pop() {
        if (!stack.empty()) {
            stack.pop();
        }
    }

    // Method to get the top element of the stack.
    T top() {
        if (!stack.empty()) {
            return stack.top();
        } else {
            // If the stack is empty, return some default value.
            return T();
        }
    }

    // Method to get the bottom element of the stack.
    T bottom() {
        if (!stack.empty()) {
            std::stack<T> tempStack = stack; // Make a copy of the stack.
            while (tempStack.size() > 1) { // Move to the last element.
                tempStack.pop();
            }
            return tempStack.top(); // Return the last element.
        } else {
            // If the stack is empty, return some default value.
            return T();
        }
    }

    // Method to check if the stack is empty.
    bool isEmpty() {
        return stack.empty();
    }

    // Method to get the size of the stack.
    size_t size() {
        return stack.size();
    }
};

int main() {
    RealNumberStack<double> myStack; // Create an instance of RealNumberStack for doubles.

    // Add elements to the stack.
    myStack.push(3.14);
    myStack.push(2.718);
    myStack.push(1.618);

    // Print the top element of the stack.
    std::cout << "Top element: " << myStack.top() << std::endl;

    // Print the bottom element of the stack.
    std::cout << "Bottom element: " << myStack.bottom() << std::endl;

    return 0;
}