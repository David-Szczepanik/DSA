/**
 * @file Queue.cpp
 * @brief This file demonstrates the usage of a queue in C++.
 * @details The queue is a First In First Out (FIFO) data structure. This file contains a function that creates a queue, adds elements to it, and then prints the elements.
 */
#include <iostream>
#include <queue>

using std::queue;
using std::cout;

/**
 * @brief Prints the elements of a queue.
 * @param queue The queue whose elements are to be printed.
 */
void printQueue(queue<int> queue) {
  while (!queue.empty()) {
    cout << queue.front() << "\n";
    queue.pop();
  }
}

/**
 * @brief Demonstrates the usage of a queue.
 * @details This function creates a queue, adds elements to it, and then prints the elements.
 */
void Queue() {
  queue<int> queue;
  queue.push(1);
  queue.push(2);
  queue.push(3);
  queue.push(4);

  queue.pop();
  queue.pop();



  printQueue(queue);
}
