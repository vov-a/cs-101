#include <iostream>

struct Node
{
    int data;
    Node *next;
};

class List
{
private:
  Node *head, *tail;
public:
  List()
  {
    head = nullptr;
    tail = nullptr;
  }

  void CreateNode(int value)
  {
    Node *temp = new Node;
    temp->data = value;
    temp->next = nullptr;
    if(head==nullptr)
      {
        head = temp;
        tail = temp;
      }
      else
      {
        tail->next = temp;
        tail = temp;
      }
  }

  void Display()
  {
    Node *temp = new Node;
    temp = head;
    while (temp != nullptr)
    {
      std::cout << temp->data << " ";
      temp=temp->next;
    }
    std::cout << std::endl;
  }

  void InsertStart(int value)
  {
    Node *temp = new Node;
    temp->data = value;
    temp->next = head;
    head = temp;
  }

  void InsertPosition(int position, int value)
  {
    Node *previus = new Node;
    Node *current = new Node;
    Node *temp = new Node;

    current = head;
    for (int i = 1; i <= position; i++)
    {
      previus = current;
      current = current->next;
    }
    temp->data = value;
    previus->next = temp;
    temp->next = current;
  }

  void DeleteFirst()
  {
    Node *temp = new Node;
    temp = head;
    head = head->next;
    delete temp;
  }

  void DeleteLast()
  {
    Node *current = new Node;
    Node *previous = new Node;
    current = head;
    while (current->next != nullptr)
      {
      previous = current;
      current = current->next;
      }
    tail = previous;
    previous->next = nullptr;
    delete current;
  }

  void DeletePosition(int position)
  {
    Node *previous = new Node;
    Node *current = new Node;
    current = head;
    for (int i = 1; i <= position; i++)
    {
      previous = current;
      current = current->next;
    }
    previous->next = current->next;
    delete current;
  }


};


int main()
{
  List myList;
  myList.CreateNode(11);
  myList.Display();
  myList.CreateNode(22);
  myList.Display();
  myList.CreateNode(33);
  myList.Display();
  myList.InsertStart(44);
  myList.Display();
  myList.InsertPosition(1, 55);
  myList.Display();
  myList.DeleteFirst();
  myList.Display();
  myList.DeleteLast();
  myList.Display();
  myList.DeletePosition(1);
  myList.Display();
}