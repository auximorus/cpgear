#include <bits/stdc++.h>
using namespace std;
// class implementation
class Node {
public:
  int data;
  Node *next;
  Node(int val) {
    data = val;
    next = NULL;
  }
};

class List {

public:
  Node *head;
  Node *tail;

  List() { head = tail = NULL; }
  void push_front(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = newnode;
      tail = newnode;
    } else {
      newnode->next = head;
      head = newnode;
    }
  }
  void members() {
    Node *temp = head;
    while (temp != NULL) {
      cout << temp->data << " ";
      temp = temp->next;
    }
  }
  void push_back(int val) {
    Node *newnode = new Node(val);
    if (head == NULL) {
      head = newnode;
      tail = newnode;
    } else {
      tail->next = newnode;
      tail = newnode;
    }
  }
  void pop_front() {
    if (head == NULL) {
      cout << "List is empty";
    } else {
      Node *temp = head;
      head = head->next;
      free(temp);
    }
  }
  void pop_back() {
    if (tail == NULL) {
      cout << "List is empty";
    } else {
      Node *temphead = head;
      while ((temphead->next) != tail) {
        temphead = temphead->next;
      }
      tail = temphead;
      tail->next = NULL;
    }
  }
  void insert(int pos, int value) {
    if (pos == 1) {
      push_front(value);
    } else {
      Node *temp = head;
      for (int i = 1; i < pos - 1; i++) {
        temp = temp->next;
      }
      Node *newnode = new Node(value);
      newnode->next = temp->next;
      temp->next = newnode;
    }
  }
  int search(int val) {
    int answer = 1;
    Node *temp = head;
    while (temp != NULL) {
      if (temp->data == val) {
        return answer;
      }
      answer++;
      temp = temp->next;
    }
    return -1;
  }
};

int main() { return 0; }
