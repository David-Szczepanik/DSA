/**
 * @file Stack.cpp
 * @brief This file demonstrates the usage of std::stack
 * LIFO
 */
#include <iostream>
#include <stack>
using std::stack;
using std::cout;

/**
 * @brief Function to print the elements of a stack
 * This function prints stack.
 * @param stack The stack whose elements are to be printed
 */
void printStackElements(stack<int> stack) {
  while (!stack.empty()) {
    cout << stack.top() << "\n";
    stack.pop();
  }
}

/**
 * @brief Function demonstrating various operations on a stack
 */
void Stack() {
  stack<int> stack;

  stack.push(1);
  stack.push(2);
  stack.push(3);
  stack.push(4);

  stack.pop();
  stack.pop();

  if (stack.empty()) {
    cout << "Stack is empty\n";
  }
  else {
    cout << "Stack is not empty\n";
    cout << "Stack size is " << stack.size() << "\n";
  }

  printStackElements(stack);

  // system("pause>0");
}
