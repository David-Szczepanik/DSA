/**
 * @file LinkedList.cpp
 * @brief This file contans the implementation of a linked list data structure.
 */
#include <iostream>
using namespace std;

/**
 * @class Node
 * @brief A class to represent a node in a linked list.
 */
class Node {
public:
  int Value;
  Node* Next;
};

/**
 * @brief Function to print the elements of a linked list
 * @param n Pointer to the head of the list
 */
void printList(Node* n) {
  while (n != nullptr) {
    cout << n->Value << endl;
    n = n->Next;
  }
}

/**
 * @brief Function to insert a new node at the front of a linked list
 * @param head Double pointer to the head of the list
 * @param newValue The value to be inserted
 */
void insertAtTheFront(Node** head, int newValue) {
  //1. Prepare newNode
  Node* newNode = new Node();
  newNode->Value = newValue;
  //2. Put in front of current head
  newNode->Next = *head;
  //3. Move head of the list to point to newNode
  *head = newNode;
}

/**
 * @brief Function to insert a new node at the end of a linked list
 * @param head Double pointer to the head of the list
 * @param newValue The value to be inserted
 */
void insertAtTheEnd(Node** head, int newValue) {
  //1. Prepare newNode
  Node* newNode = new Node();
  newNode->Value = newValue;
  newNode->Next = nullptr;
  //2. If Linked list is empty, newNode will be head node
  if (*head == nullptr) {
    *head = newNode;
    return;
  }
  //3. Find the last node
  Node* last = *head;
  while (last->Next != nullptr) {
    last = last->Next;
  }
  //4. Insert newNode after last node (at the end)
  last->Next = newNode; // last node will point to the newNode
}

/**
 * @brief Function to insert a new node after a given node in a linked list
 * @param previous Pointer to the node after which the new node is to be inserted
 * @param newValue The value to be inserted
 */
void insertAfter(Node* previous, int newValue) {
  //1. Check if previous node is NULL
  if (previous == nullptr) {
    cout << "Previous can not be NULL";
    return;
  }
  //2. Prepare a newNode
  Node* newNode = new Node();
  newNode->Value = newValue;
  //3. Insert newNode after previous
  newNode->Next = previous->Next;
  previous->Next = newNode;
}

/**
 * @brief Function demonstrating various operations on a linked list
 * @details This function creates a linked list with three nodes, then demonstrates various operations such as inserting a node at the front, at the end, and after a given node.
 * @example
 */
void LinkedLists() {
  Node* head = new Node();
  Node* second = new Node();
  Node* third = new Node();

  head->Value = 1;
  head->Next = second;
  second->Value = 2;
  second->Next = third;
  third->Value = 3;
  third->Next = nullptr;


  insertAtTheFront(&head, -0);
  insertAtTheFront(&head, -1);

  // insertAtTheEnd(&head, 4);
  // insertAtTheEnd(&head, 5);

  // insertAfter(head, -10);
  // insertAfter(second, -5);

  printList(head);
}
