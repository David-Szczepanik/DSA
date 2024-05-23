#include <iostream>
using namespace std;

class Node {
public:
  int Value;
  Node* Next;
};

void printList(Node* n) {
  while (n != nullptr) {
    cout << n->Value << endl;
    n = n->Next;
  }
}

void insertAtTheFront(Node** head, int newValue) {
  //1. Prepare newNode
  Node* newNode = new Node();
  newNode->Value = newValue;
  //2. Put in front of current head
  newNode->Next = *head;
  //3. Move head of the list to point to newNode
  *head = newNode;
}

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
  Node*last = *head;
  while(last->Next!=nullptr) {
    last = last->Next;
  }
  //4. Insert newNode after last node (at the end)
  last->Next = newNode;
}

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

  insertAtTheEnd(&head, 4);
  insertAtTheEnd(&head, 5);

  printList(head);
}
