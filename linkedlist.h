using namespace std;

struct Node {
  int data;
  struct Node* next;

  Node(int data) {
    this->data = data;
    next = NULL;
  }
};

struct LinkedList {
  Node* head;
  int size;

  LinkedList() {
    head = NULL;
    size = 0;
  }

  void reverse() {
      Node* current = head;
      Node *next = NULL, *prev = NULL;
      while (current != NULL) {
        next = current->next;
        current->next = prev;
        prev = current;
        current = next;
      }
      head = prev;
  }

  void push(Node aNode) {
    Node* temp = new Node(aNode.data);
    temp->next = head;
    head = temp;
    size += 1;
  }

  void print() {
    Node* temp = head;
    while (temp != NULL) {
      cout << temp->data << "->";
      temp = temp->next;
    }
    cout << "NULL" << endl;
  }
};
