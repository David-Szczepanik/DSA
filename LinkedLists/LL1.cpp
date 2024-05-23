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
        cout << n->Value << endl;
        n = n->Next;
      }
    }
    void insertAtTheFront(Node**head, int newValue) {
      //1. Prepare newNode
      Node* newNode = new Node;
      newNode->Value = newValue;
      //2. Put in front of current head
      newNode->Next = *head;
      //3. Move head of the list to point to newNode
      *head = newNode;
    }

    void LL1() {
      Node* head = new Node;
      Node* second = new Node;
      Node* third = new Node;

      head->Value = 1;
      head->Next = second;
      second->Value = 2;
      second->Next = third;
      third->Value = 3;
      third->Next = nullptr;

      insertAtTheFront(&head, -1);
      insertAtTheFront(&head, 1);
      printList(head);
    }
}
