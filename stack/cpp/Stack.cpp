#include <iostream>

class Stack
{

private:
  int* arr;
  int top;
  int capacity;

public:
  Stack(int size)
  {
    arr = new int[size];
    capacity = size;
    top = -1;
  }

  int size()
  {
    return top + 1;
  }

  bool isEmpty()
  {
    return top == -1;
  }

  bool isFull()
  {
    return top == capacity - 1;
  }

  int peek()
  {
    if (!isEmpty())
      return arr[top];
    else
      exit(EXIT_FAILURE);
  }

  void push(int item)
  {
    if (isFull())
      exit(EXIT_FAILURE); 
    arr[++top] = item;
  }

  int pop()
  {
    if (isEmpty())
      exit(EXIT_FAILURE);
    return arr[top--]; 
  }

};


int main()
{
  Stack myStack(3);

  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl << std::endl;

  myStack.push(1);

  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl;
  std::cout << myStack.peek() << std::endl << std::endl;

  myStack.push(2);

  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl;
  std::cout << myStack.peek() << std::endl << std::endl;

  myStack.push(3);

  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl;
  std::cout << myStack.peek() << std::endl << std::endl;

  int var = myStack.pop();
  std::cout << var << std::endl;
  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl;
  std::cout << myStack.peek() << std::endl << std::endl;

  var = myStack.pop();
  std::cout << var << std::endl;
  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl;
  std::cout << myStack.peek() << std::endl << std::endl;

  var = myStack.pop();
  std::cout << var << std::endl;
  std::cout << myStack.size() << std::endl;
  std::cout << myStack.isEmpty() << std::endl;
  std::cout << myStack.isFull() << std::endl;

}