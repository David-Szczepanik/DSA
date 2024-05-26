// LinkedLists/LL1.cpp
#include <iostream>
using namespace std;

namespace LL1Namespace {
  class Node {
  public:
    int Value;
    Node* Next;
  };

  void printList(Node* n) {
    while (n != nullptr) {
      std::cout << n->Value << "\n";
      n = n->Next;
    }
  }

  void insertAtTheFront(Node** head, int newValue) {
    Node* newNode = new Node;
    newNode->Value = newValue;
    newNode->Next = *head;
    *head = newNode;
  }

  void insertAtTheEnd(Node** head, int newValue) {
    Node* newNode = new Node;
    newNode->Value = newValue;
    newNode->Next = nullptr;

    if (*head == nullptr) {
      *head = newNode;
      return;
    }

    Node* last = *head;
    while (last->Next != nullptr) {
      last = last->Next;
    }

    last->Next = newNode;
  }

  void LL1() {
    Node* head = new Node;
    // Node* second = new Node;
    // Node* third = new Node;
    //
    head->Value = 1;
    head->Next = nullptr;
    // head->Next = second;
    // second->Value = 2;
    // second->Next = third;
    // third->Value = 3;
    // third->Next = nullptr;

    insertAtTheFront(&head, -1);
    insertAtTheFront(&head, 5);
    insertAtTheEnd(&head, 9);
    insertAtTheEnd(&head, 20);

    printList(head);
  }
}
