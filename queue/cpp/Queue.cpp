#include <iostream>

class Queue
{
private:
  int *arr;
  int capacity;
  int front;
  int rear;
  int count;

public:

  Queue(int size)
  {
    arr = new int[size];
    capacity = 3;
    front = 0;
    rear = -1;
    count = 0;
  }

  int size()
  {
    return count;
  }

  bool isEmpty()
  {
    return size() == 0;
  }

  bool isFull()
  {
    return size() == capacity;
  }

  int peek()
  {
    if (isEmpty())
      exit(EXIT_FAILURE);
    
    return arr[front];
  }

  void enqueue(int item)
  {
    if (isFull())
      exit(EXIT_FAILURE);
    
    rear = (rear + 1) % capacity;
    arr[rear] = item;
    count++;
  }

  int dequeue()
  {
    if (isEmpty())
      exit(EXIT_FAILURE);
    
    int item = arr[front];
    front = (front + 1) % capacity;
    count--;
    return item;
  }
};

int main()
{
  Queue myQueue(3);

  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl << std::endl;

  myQueue.enqueue(11);

  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl;
  std::cout << myQueue.peek() << std::endl << std::endl;

  myQueue.enqueue(22);

  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl;
  std::cout << myQueue.peek() << std::endl << std::endl;

  myQueue.enqueue(33);

  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl;
  std::cout << myQueue.peek() << std::endl << std::endl;

  int var = myQueue.dequeue();
  std::cout << var << std::endl;
  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl;
  std::cout << myQueue.peek() << std::endl << std::endl;

  var = myQueue.dequeue();
  std::cout << var << std::endl;
  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl;
  std::cout << myQueue.peek() << std::endl << std::endl;

  var = myQueue.dequeue();
  std::cout << var << std::endl;
  std::cout << myQueue.size() << std::endl;
  std::cout << myQueue.isEmpty() << std::endl;
  std::cout << myQueue.isFull() << std::endl;

}