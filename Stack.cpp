#include <iostream>
#include <stack>
using std::stack;
using std::cout;

// LIFO
void printStackElements(stack<int> stack) {
  while (!stack.empty()) {
    cout << stack.top() << " ";
    stack.pop();
  }
}

void Stack() {
  stack<int> numbersStack;
  numbersStack.push(1);
  numbersStack.push(2);
  numbersStack.push(3);
  numbersStack.push(4);
  numbersStack.push(5);

  numbersStack.pop();

  if (numbersStack.empty())
    cout << "Stack is empty\n";
  else
    cout << "Stack is not empty\n";
  cout << "Stack size is " << numbersStack.size() << "\n";

  printStackElements(numbersStack);

  // system("pause>0");
}
