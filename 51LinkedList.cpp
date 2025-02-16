#include <iostream>
using namespace std;

class Node{
  public:
  int data;
  Node *next;

  Node(int val){
    data = val;
    next = NULL;
  }
};

class List{
  Node *head;
  Node *tail; 

  public:
  List(){
    head = tail = NULL;
  }

  void push_front(int val){
    Node* newNode = new Node(val);//dynamic
    // Node newNode(val); //static

    if(head == NULL){
      head = tail = newNode;
      return;
    }
    else{
      newNode ->next = head;
      head = newNode;
    }
    }

    void printL(){
      Node *temp = head;

      while(temp != NULL){
        cout << temp -> data << " -> ";
        temp = temp -> next;
      }
      cout <<"NULL"<< endl;
    }
  };

int main(){
  List li;
  li.push_front(10);
  li.push_front(20);
  li.push_front(30);

  li.printL();

  return 0;;
}
