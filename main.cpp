#include <iostream>
#include <stack>

template<typename T>
class RealNumberStack  {
private:
    std::stack<T> stack;

public:
    void push(const T& value) {
        stack.push(value);
    }

    void pop() {
        if (!stack.empty()) {
            stack.pop();
        }
    }

    T top() {
        if (!stack.empty()) {
            return stack.top();
        } else {
            return T();
        }
    }

    T bottom() {
        if (!stack.empty()) {
            std::stack<T> tempStack = stack;
            while (tempStack.size() > 1) {
                tempStack.pop();
            }
            return tempStack.top();
        } else {
            return T();
        }
    }

    bool isEmpty() {
        return stack.empty();
    }

    size_t size() {
        return stack.size();
    }
};

int main() {
    RealNumberStack <double> myStack;

    myStack.push(3.14);
    myStack.push(2.718);
    myStack.push(1.618);

    std::cout << "Top element: " << myStack.top() << std::endl;

    std::cout << "Bottom element: " << myStack.bottom() << std::endl;

    return 0;
}